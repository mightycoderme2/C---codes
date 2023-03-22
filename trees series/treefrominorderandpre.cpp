/* C++ program to construct tree using inorder and
pretorder traversals */
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

Node * createtree(int in[],int pre[],int l,int r,int &index,map<int,int>m)
{
    if(l>r)
    {
        return NULL;
    }
    int c=pre[index];
    Node *node = newNode(pre[index]);
    index++;
    if(l==r)
    {
        return node;
    }
    node->left=createtree(in,pre,l,m[c]-1,index,m);
    node->right=createtree(in,pre,m[c]+1,r,index,m);
    return node;

}
Node * buildTree(int in[],int pre[],int n)
{
    map<int,int>m;
    for(int i = 0; i < n; i++)
    {
        m[in[i]]=i;
    }
    int index=0;
    return createtree(in,pre,0,n-1,index,m);
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
void postorder(Node* node)
{
	if (node == NULL)
		return;
	postorder(node->left);
	postorder(node->right);
    printf("%d ", node->data);
}

// Driver code
int main()
{
	int in[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
	//int pos[] = { 8, 4, 5, 2, 6, 7, 3, 1 };
    int pre[]={1, 2 ,4 ,8 ,5, 3 ,6 ,7};
	int n = sizeof(in) / sizeof(in[0]);

	Node* root = buildTree(in, pre, n);

	cout << "postorder of the constructed tree : \n";
	postorder(root);

	return 0;
}
