#include<iostream>
#include<queue>
using namespace std;
struct node 
{
    int data;
    struct node *left,*right;
};

struct node *create(int a)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->left=temp->right=NULL;
    temp->data=a;
    return temp;
}

struct node * insert(struct node *root,int a)
{
    if(root==NULL)
    {
        root = create(a);
    }
    else if(a>=root->data)
    {
        root->right=insert(root->right,a);
    }
    else if(root->data>a)
    {
        root->left=insert(root->left,a);
    }
    return root;
}

void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
}


void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
}


void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
}


struct node *  min(struct node *root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

int max(struct node *root)
{
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}

int height(struct node * root)
{
    if(root==NULL)
    {
        return -1;
    }
    return(max(height(root->right),height(root->left))+1);

}

void levelorder(struct node *root)
{
    queue<struct node * > q;
    q.push(root);
    while(!q.empty())   
    {
        struct node *temp=q.front();
        cout<<temp->data;
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        q.pop();
    }
}


struct node* delete1(struct node* start, int x)
{
    struct node* temp;
    if(start == NULL)
        return NULL;
    else if(x < start->data)
        start->left = delete1(start->left, x);
    else if(x > start->data)
        start->right = delete1(start->right, x);
        
    else if(start->left && start->right)
    {
        temp = min(start->right);
        start->data = temp->data;
        start->right = delete1(start->right, start->data);
    }
    else
    {
        temp = start;
        if(start->left == NULL)
            start = start->right;
        else if(start->right == NULL)
            start = start->left;
        free(temp);
    }
    return start;
}
int main()
{
    int choice;
    struct node *root=NULL;
    do{
    cout<<"\nEnter your choice:\t";
    cin>>choice;
    switch(choice)
    {
        case 1:
        int a;
        cout<<"enter the data";
        cin>>a;
        root=insert(root,a);
        break;
        case 2:preorder(root);
        break;
        case 3:inorder(root);
        break;
        case 4:postorder(root);
        break;
        case 5:levelorder(root);
        break;
        case 6:int b;
        cout<<"enter a value to delete1";
        cin>>b;
        delete1(root,b);
        break;
        default:
            cout<<"\nNot Valid Choice...!";
    }
    }while(choice != 9);
}
