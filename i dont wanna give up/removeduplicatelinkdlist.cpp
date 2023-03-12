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

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<set>
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head)
    {
        Node * temp=head;
        set<int>a;
        Node *temp2=NULL;
        Node *temp3=NULL;
        while(temp!=NULL)
        {
            if(a.find(temp->data)==a.end())
            {
                //cout<<temp->data;
                 a.insert(temp->data);

                if(temp2==NULL)
                {
                    temp2=new Node(temp->data);
                    temp3=temp2;
                }
                else
                {
                    temp3->next=new Node(temp->data);
                    temp3=temp3->next;
                }

            }
            temp=temp->next;
        }
        head=temp2;
        return head;
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
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;

	}
	return 0;
}
// } Driver Code Ends
