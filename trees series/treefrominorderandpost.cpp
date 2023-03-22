/* C++ program to construct tree using inorder and
postorder traversals */
#include <bits/stdc++.h>

using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
struct Node {
	int data;
	Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data);

Node * createtree(int in[],int pos[],int l,int r,int &index,map<int,int>m)
{
    if(l>r)
    {
        return NULL;
    }
    int c=pos[index];
    Node *node = newNode(pos[index]);
    index--;
    if(l==r)
    {
        return node;
    }
    node->right=createtree(in,pos,m[c]+1,r,index,m);
    node->left=createtree(in,pos,l,m[c]-1,index,m);
    return node;

}
Node * buildTree(int in[],int pos[],int n)
{
    map<int,int>m;
    for(int i = 0; i < n; i++)
    {
        m[in[i]]=i;
    }
    int index=n-1;
    return createtree(in,pos,0,n-1,index,m);
}
/* Helper function that allocates a new node */
Node* newNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

/* This function is here just to test */
void preOrder(Node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}

// Driver code
int main()
{
	int in[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
	int post[] = { 8, 4, 5, 2, 6, 7, 3, 1 };
	int n = sizeof(in) / sizeof(in[0]);

	Node* root = buildTree(in, post, n);

	cout << "Preorder of the constructed tree : \n";
	preOrder(root);

	return 0;
}
