#include<iostream>
#include<queue>
using namespace std;
struct node 
{
    int data;
    struct node *left,*right;
};
struct node *createnode(int x)
{
    struct node *ptr;
    ptr=(struct node *)(malloc(sizeof(struct node))); 
    ptr->data=x;
    ptr->left=ptr->right=NULL;
    return ptr;
}


void levelorderprint(struct node *root)
{
    queue<struct node *>q;
    q.push(root);
    while(!q.empty())   
    {
        struct node *temp=q.front();
        cout<<temp->data<<" ";
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
    cout<<"\n";
}


struct node * levelorder(struct node *root,int a[],int i,int n)
{
    if(i<n)
    { 
        root=createnode(a[i]);
        root->left=levelorder(root->left,a,2*i +1,n);
        root->right=levelorder(root->right,a,2*i +2,n);
    }
    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    struct node *root=NULL;
    /*
    int n;
    cout<<"enter the number of elemeents";
    cin>>n;
    int a[n];
    cout<<"enter elemetns in ascending order";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    */
    int a[]={1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(a)/sizeof(a[0]);
root=levelorder(root,a,0,n);
levelorderprint(root);
inorder(root);
    return 0;
}