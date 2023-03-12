//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node * temp= head->next;
        Node *temp1=new Node(head->data);
        Node *temp2=temp1;
        while(temp!=NULL)
        {
            temp2->next=new Node(temp->data);
            temp2=temp2->next;
            temp=temp->next;
        }
        Node * prev=NULL;
        while(head!=NULL)
        {
            Node * new1=head->next;
            head->next=prev;
            prev=head;
            head=new1;
        }
        head=prev;
        temp=head;
        temp2=temp1;
        while(temp!=NULL)
        {
            if(temp->data!=temp2->data)
            {
                return 0;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return 1;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {

        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
