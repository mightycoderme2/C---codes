//{ Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;

    Node* head = new Node(val);
    Node* tail = head;

    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;

        cin>>n;
        Node* first = buildList(n);

        cin>>m;
        Node* second = buildList(m);

        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
#include<cmath>
//You are required to complete this method

Node* subLinkedList(Node* l1, Node* l2)
{
    //Your code here
    long long int n1=0,n2=0;
    Node *temp1=l1;
    Node *temp2=l2;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1==NULL)
        {
            n2=temp2->data+(n2)*10;
            temp2=temp2->next;
        }
        if(temp2==NULL)
        {
            n1=temp1->data+(n1)*10;
            temp1=temp1->next;
        }
        else
        {
        n1=temp1->data+(n1)*10;
        n2=temp2->data+(n2)*10;
        temp1=temp1->next;
        temp2=temp2->next;
        }
        //cout<<n1<<' '<<n2<<' ';
    }
        n1=abs(n1-n2);
        temp1=NULL;
        temp2=temp1;
        while(n1!=0)
        {
            if(temp1==NULL)
            {
                temp1=new Node(n1%10);
                temp2=temp1;
            }
            else
            {
                temp2->next=new Node(n1%10);
                temp2=temp2->next;
            }
            n1=n1/10;
        }
        return temp1;
    //cout<<n1;
    //cout<<abs(n1-n2);
}
