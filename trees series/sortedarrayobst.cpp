#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

struct Node* newNode(int value)
{
    Node* n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}



void levelOrder(struct Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> n;
    n.push(root);
    while (!n.empty()) {
        cout << n.front()->data << " ";
        if (n.front()->left != NULL)
            n.push(n.front()->left);
        if (n.front()->right != NULL)
            n.push(n.front()->right);
        n.pop();
    }
}
Node * createTree(int a[],int l,int r)
{
    int mid=r+(l-r)/2;
    if(l>r)
    {
        return NULL;
    }
    Node * root =newNode(a[mid]);
    root->left=createTree(a,l,mid-1);
    root->right=createTree(a,mid+1,r);
    return root;
}
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60,70};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node * root = createTree(arr, 0,n-1);
    levelOrder(root);
    return 0;
}
