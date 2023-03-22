// CPP program to construct a binary tree in level order.
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

// Function to create a node with 'value' as the data
// stored in it.
// Both the children of this new Node are initially null.
struct Node* newNode(int value)
{
	Node* n = new Node;
	n->data = value;
	n->left = NULL;
	n->right = NULL;
	return n;
}

struct Node* insertValue(struct Node* root, int value,
						queue<Node *>& q)
{
	Node* node = newNode(value);
	if (root == NULL)
		root = node;

	// The left child of the current Node is
	// used if it is available.
	else if (q.front()->left == NULL)
		q.front()->left = node;

	// The right child of the current Node is used
	// if it is available. Since the left child of this
	// node has already been used, the Node is popped
	// from the queue after using its right child.
	else {
		q.front()->right = node;
		q.pop();
	}

	// Whenever a new Node is added to the tree, its
	// address is pushed into the queue.
	// So that its children Nodes can be used later.
	q.push(node);
	return root;
}

// This function mainly calls insertValue() for
// all array elements. All calls use same queue.
Node* createTree(int arr[], int n)
{
	Node* root = NULL;
	queue<Node*> q;
	for (int i = 0; i < n; i++)
	root = insertValue(root, arr[i], q);
	return root;
}



// Driver code
void levelorder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    int size=1;
    while(true)
    {
        int size=q.size();
        if(size==0)
        {
            break;
        }
        cout<<q.front()->data<<' ';
        while(size)
        {
            Node *node=q.front();
            q.pop();
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            {
                q.push(node->right);
            }
            size--;
        }
    }
}


int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60 ,70,80,90};
	int n = sizeof(arr) / sizeof(arr[0]);
	Node* root = createTree(arr, n);
    levelorder(root);
	return 0;
}
