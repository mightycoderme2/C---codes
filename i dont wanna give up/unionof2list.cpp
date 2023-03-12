//{ Driver Code Starts
#include<bits/stdc++.h>
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

struct Node* makeUnion(struct Node* head1, struct Node* head2);

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

        printList(makeUnion(first,second));
    }
    return 0;
}

// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;

	node(int x){
	    data = x;
	    next = NULL;
	}

};

*/
#include<set>
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>a;
    struct Node *temp1=head1;
    struct Node *temp2=head2;
    struct Node *temp3=NULL;
    struct Node *temp4=temp3;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1==NULL)
        {
        a.insert(temp2->data);
        temp2=temp2->next;
        }
        else if(temp2==NULL)
        {
        a.insert(temp1->data);
        temp1=temp1->next;
        }
        else
        {
        a.insert(temp1->data);
        a.insert(temp2->data);
        temp1=temp1->next;
        temp2=temp2->next;
        }
    }
    for(int x:a)
    {
        if(temp3==NULL)
        {
            temp3=new Node(x);
            temp4=temp3;
        }
        else
        {
            temp3->next=new Node(x);
            temp3=temp3->next;
        }
    }
    return temp4;
}
