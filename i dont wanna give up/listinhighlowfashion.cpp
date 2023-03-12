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
#include<set>
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
        set<int>a;
     // your code goes here
     Node *temp=head;
     Node *temp1=NULL;
     Node *temp2=temp1;
     int count=0;
     while(temp!=NULL)
     {
         a.insert(temp->data);
         temp=temp->next;
         count++;
     }
   while(a.size()>1)
   {
       if(temp1==NULL)
       {
           temp1=new Node(*a.begin());
           temp2=temp1;
           temp2->next=new Node(*a.rbegin());
           temp2=temp2->next;
       }
       else
       {
           temp2->next=new Node(*a.begin());
           temp2=temp2->next;
           temp2->next=new Node(*a.rbegin());
           temp2=temp2->next;

       }
       a.erase(*a.begin());
       a.erase(*a.rbegin());
   }
   if(a.size())
   {
      temp2->next=new Node(*a.begin());
      temp2=temp2->next;

   }
   return temp1;

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
