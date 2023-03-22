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

void levelOrder(Node* root)
{bool val;
    queue<Node *>q;
    stack<Node *>s;
    q.push(root);
    while(1)
    {
        int size=q.size();
        if(size==0)
        {
            break;
        }
    while(size)
    {
        Node * node=q.front();
        q.pop();
        if(node->left)
        {
            q.push(node->left);
             s.push(node->left);
        }
        else
        {
        s.push(newNode(-1));
        }
        if(node->right)
        {
            q.push(node->right);
            s.push(node->right);
        }
        else
        {
            s.push(newNode(-1));
        }
        size--;
    }
    int x_tolerate=1;
    while(!s.empty())
    {
        Node *x=s.top();
        s.pop();
        if(x->data==-1)
        {
            if(x_tolerate==1)
            {
                val=true;
            }
            else
            {
                val=false;
            }
        }
        if(x>0)
        {
            x_tolerate=0;
        }
    }
    }
    cout<<val;
}

int main()
{
    int arr[] = { 10, 20, 30, 40, -1, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = createTree(arr, n);
    levelOrder(root);
    return 0;
}
