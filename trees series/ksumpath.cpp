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

void ans(Node *root,int &k,string &s)
{
    //cout<<k<<' ';
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<s;
    }
    s=s+to_string(root->data);
    k=k-root->data;
    ans(root->left,k,s);
    ans(root->right,k,s);
}

void main_ans(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    string s="";
    int l=70;
    main_ans(root->left);
    ans(root,l,s);
    main_ans(root->right);
}

int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = createTree(arr, n);
    main_ans(root);
    return 0;
}
