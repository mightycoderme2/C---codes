//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout<<"\n";
}


// } Driver Code Ends
//User function template for C++

/*

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

class Solution
{
    public:
    Node* addOne(Node *head)
    {
        // Your Code here
        // return head of list after adding one
        Node * prev=NULL;;
        int carry=0;
        while(head!=NULL)
        {
            Node *new1=head->next;
            head->next=prev;
            prev=head;
            head=new1;
        }
        head=prev;
        Node *temp=head;
        while(temp!=NULL )
        {
            if(carry==1 && temp->next==NULL && temp->data==9)
            {
                temp->data=temp->data+carry;
            temp->data=temp->data%10;
                temp->next=new Node(carry);
                break;
            }
            if(head==temp)
            {
            temp->data=temp->data+carry+1;
            carry=temp->data/10;
            temp->data=temp->data%10;
            if(carry==1 && temp->next==NULL)
            {

            temp->data=temp->data%10;
                temp->next=new Node(carry);
                break;
            }
            }
            else
            {
                temp->data=temp->data+carry;
                carry=temp->data/10;
            temp->data=temp->data%10;
            }

            temp=temp->next;

        }
        prev=NULL;
        while(head!=NULL)
        {
            Node *new1=head->next;
            head->next=prev;
            prev=head;
            head=new1;
        }
        return prev;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends
