//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


// } Driver Code Ends
/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution
{
    public:
    void swap(int *x,int *y)
    {
            int temp=*x;
            *x=*y;
            *y=temp;
    }
    Node *zigZag(Node* head)
    {
     // your code goes here
     Node *temp=head;
     int k=1;
     while(temp->next!=NULL )
     {
         if(k)
         {
             if(temp->data>temp->next->data)
             {
                 swap(&temp->data,&temp->next->data);
             }
         }
        else
         {
             if(temp->data<temp->next->data)
             {
                 swap(&temp->data,&temp->next->data);
             }
         }
         k=!k;
         temp=temp->next;
     }
            struct Node *temp1=head;
        while(temp1!=NULL)
        {
            cout<<temp1->data<<' ';
            temp1=temp1->next;
        }
    }
};

//{ Driver Code Starts.


int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Solution ob;
		Node *ans = ob.zigZag(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
