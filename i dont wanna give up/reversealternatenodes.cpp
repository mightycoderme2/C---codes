//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");

}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/
class Solution
{
    public:
    struct Node * reverse(Node *temp)
    {
        struct Node *prev =NULL;
        while(temp!=NULL)
        {
            struct Node *new1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=new1;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
        struct Node *odd1=odd;
        struct Node * temp=odd1->next->next;
        struct Node *temp1=new Node(odd1->data);
        struct Node *temp2=temp1;
        while(temp->next->next!=NULL)
        {
            temp2->next=new Node(temp->data);
            temp2=temp2->next;
            temp=temp->next->next;
        }
        temp=reverse(odd1);
        while(temp->next->next!=NULL)
        {
            temp2->next=new Node(temp->data);
            temp2=temp2->next;
            temp=temp->next->next;
        }
        printList(temp1);
        temp2=odd;
        temp1=temp1->next;
        while(temp1!=NULL)
        {
            temp2->next=new Node(temp1->data);
            temp2=temp2->next;
            temp1=temp1->next;
        }
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends
