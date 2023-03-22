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


bool check(Node *root)
{
    if (root == NULL)
        return true;
    queue<Node*> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty()) {
        Node *l=q.front();
        q.pop();
        Node *r=q.front();
        q.pop();
        if(r==NULL && l==NULL)
        {
            continue;
        }
        if((r!=NULL&&l==NULL)||(r==NULL&&l!=NULL))
        {
            return false;
        }
        if(r->data!=l->data)
        {
            return false;
        }
        q.push(l->left);
        q.push(r->right);
        q.push(l->right);
        q.push(r->left);
    }
    return true;
}
int main()
{
    int arr[] = { 1,2,2,3,4,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = createTree(arr, n);
    //levelOrder(root);
    cout<<check(root);
    return 0;
}
