#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void display()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void insert_at_beg()
{
    struct node *temp,*ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    temp=start;
    ptr->next=NULL;
    cout<<"enter the node data";
    cin>>ptr->data;
    if(start=NULL)
    {
        start=ptr;
    }
    else
    {
        ptr->next=temp;
        start=ptr;
    }
    display();
}
void insert_at_last()
{
    struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(struct node *));
    temp=start;
    ptr->next=NULL;
    cout<<"enter the node data";
    cin>>ptr->data;
if(start==NULL)
{
start=ptr;
}
else
{
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
display();
}
void insert_at_pos()
{
    struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(struct node *));
    temp=start;
    ptr->next=NULL;
    cout<<"enter the node data";
    cin>>ptr->data;
    int pos;
    cout<<"enter position";
    cin>>pos;
if(start==NULL)
{
start=ptr;
}
else
{
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}
display();
}
void delete_at_beg()
{
struct node *temp,*ptr;
temp=start;
if(start==NULL)
{
    cout<<"empty";
}
else
{
start=start->next;
temp->next=NULL;
free(temp);
display();
}
}
void delete_at_last()
{
struct node *temp,*ptr;
temp=start;
if(start==NULL)
{
    cout<<"empty";
}
else
{
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }  
    ptr->next=NULL;
    free(temp);
}
display();
}
void delete_at_pos()
{
struct node *temp,*ptr;
temp=start;
    int pos;
    cout<<"enter position";
    cin>>pos;
if(start==NULL)
{
    cout<<"empty";
}
else
{
    for(int i=1;i<pos;i++)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=NULL;
    free(temp);
}
display();
}
void search()
{
    int value,pos=0;
    cout<<"enter value to be searched\n";
    cin>>value; 
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            cout<<"element found at position "<<pos;
        }
        pos=pos+1;
        temp=temp->next;
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"\nenter an option below\n";
        //cout<<"\n1.insert at first\n2.insert at last\n3.insert at position\n4.delete at first\n5.delete at last\n6.delete at position\n7.search\n8.display";
        cin>>choice;
        switch(choice)
        {
        
            case 1:insert_at_beg();
            break;
            case 2:insert_at_last();
            break;
            case 3:insert_at_pos();
            break;
            case 4:delete_at_beg();
            break;
            case 5:delete_at_last();
            break;
            case 6:delete_at_pos();
            break;
            case 7:search();
            break;
            case 8:display(); 
            break;
            case 9:exit(0);
        }
    }
    return 0;
}