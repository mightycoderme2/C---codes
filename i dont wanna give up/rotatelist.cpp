//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        int count=0;
        Node * temp2=head;
        while(temp2!=NULL)
        {
            count++;
            temp2=temp2->next;
        }
        if(count==k)
        {
            return head;
        }
        else
        {
        // Your code here
        Node * temp=NULL;
        Node *temp1;
        while(k)
        {
            if(temp==NULL)
            {
                temp=new Node(head->data);
                temp1=temp;
            }
            else
            {
                temp1->next=new Node(head->data);
                temp1=temp1->next;
            }
            head=head->next;
            k--;
        }
         temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
        return head;

        }
    }

};



//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;

        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;

        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }

        cin>> k;

        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends
