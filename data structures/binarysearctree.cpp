#include<iostream>
#include<queue>
using namespace std;
struct node 
{
    int data;
    struct node *right,*left;
};

struct node * createnode(int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
struct node * insert(struct node *root,int a)
{
    if(root==NULL)
    {
        return createnode(a);
    }
    else if(a>root->data)
    {
        root->right=insert(root->right,a);
    }
    else if(a<root->data)
    {
        root->left=insert(root->left,a);
    }
    return root;
}
void preorder(struct node * temp)
{
    if(temp!=NULL)
    {
        cout<<temp->data;
        preorder(temp->left);
        preorder(temp->right);
    }
}

void inorder(struct node * temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->data;
        inorder(temp->right);
    }
}

void postorder(struct node * temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data;
    }
}

void levelorder(struct node * temp)
{
    queue <struct node *> q;
    q.push(temp);
    while(!q.empty())
    {
        temp=q.front();
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

struct node * min(struct node * temp)
{
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
struct node * remove(struct node *root,int data)
{
    if(root==NULL) return NULL;
    else if(data>root->data)
    {
        root->right=remove(root->right,data);
    }
    else if(data<root->data)
    {
        root->left=remove(root->left,data);
    }
    else 
    {
        struct node *temp;
        temp=root;
        if(root->left && root->right)
        {
            free(root);
        }
        else if(root->left==NULL)
        {
            root=root->right;
            free(temp);
        }
        else if(root->right==NULL)
        {
            root=root->left;
            free(temp);
        }
        else
        {
            root->data=min(root->right)->data;
            root->right=remove(root->right,data);
        }
    }
    return root;

}

int height(struct node *root)
{
    if(root==NULL)
    {
        return -1; 
    }
    else
    {
        return max(height(root->left),height(root->right))+1;
    }

}

struct node* Find(struct  node *root, int data) {
	if(root == NULL) return NULL;
	else if(root->data == data) return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
}

struct node* getsuccessor(struct node* root,int data) {
	// Search the node - O(h)
	struct node* current = Find(root,data);
	if(current == NULL) return NULL;
	if(current->right != NULL) {  //Case 1: node has right subtree
		return FindMin(current->right); // O(h)
	}
	else {      //Case 2: no right subtree  - O(h)
		struct node* successor = NULL;
		struct node* temp = root;
		while(temp != current) {
			if(current->data < temp->data) {
				successor = temp; // so far this is the deepest node for which current node is in left
				temp = temp->left;
			}
			else
				temp = temp->right;
		}
		return successor;
	}
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
        cout<<"enter a value to delete";
        cin>>b;
        remove(root,b);
        break;
        case 7:cout<<height(root);
        break;
        case 8:
        int a;
        cout<<"enter the node u which u want to get the inorder successor";
        cin>>a;
        getsuccessor(root,a);
        break;
        default:
            cout<<"\not Valid Choice...!";
    }
    }while(choice != 9);
}
