#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

struct Node* newNode(string value)
{
    Node* n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct Node* insertValue(struct Node* root, string value,
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

Node* createTree(string arr[], int n)
{
    Node* root = NULL;
    queue<Node*> q;
    for (int i = 0; i < n; i++)
    root = insertValue(root, arr[i], q);
    return root;
}


void inorder(Node *root,queue<string>&q)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,q);
    q.push(root->data);
    inorder(root->right,q);
}

int eval(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return stoi(root->data);
    }
    int l=eval(root->left);
    int r=eval(root->right);
    if(root->data=="+")
    {
        return l+r;
    }
    if(root->data=="*")
    {
        return l*r;
    }
    if(root->data=="-")
    {
        return l-r;
    }

}
int main()
{
    queue<string>q;
    string arr[] = { "*", "+", "-", "40", "50", "60" ,"70" };
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = createTree(arr, n);
    cout<<eval(root);
    return 0;
}
