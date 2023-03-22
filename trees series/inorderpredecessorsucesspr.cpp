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

struct Node* insertValue(struct Node* root, int value,
                        queue<Node *>& q)
{
    Node* node = newNode(value);
    if (root == NULL)
        root = node;

    else if (q.front()->left == NULL)
        q.front()->left = node;

    else {
        q.front()->right = node;
        q.pop();
    }

    q.push(node);
    return root;
}

Node* createTree(int arr[], int n)
{
    Node* root = NULL;
    queue<Node*> q;
    for (int i = 0; i < n; i++)
    root = insertValue(root, arr[i], q);
    return root;
}

void inorder(Node *root,queue<Node*>&q)
{
if(root==NULL) return;
inorder(root->left,q);
cout<<root->data<<' ';
q.push(root);
inorder(root->right,q);
}

int main()
{
    queue<Node*>q;
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = createTree(arr, n);
    inorder(root,q);
    int x=40;
    Node * node=q.front();
    while(!q.empty())
    {
        if(x!=q.front()->data)
        {
            node=q.front();
            q.pop();
        }
        else
        {
            q.pop();
            cout<<'\n'<<"Inorder Sucessor :"<<q.front()->data<<"\nInorder Predecessor :"<<node->data;
            break;
        }
    }
    return 0;
}
