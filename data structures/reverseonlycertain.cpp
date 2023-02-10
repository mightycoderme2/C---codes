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

void reverse()
{
struct node *temp,*ptr=NULL;
temp=start;
while(start!=NULL)
{
    temp=start->next;
    start->next=ptr;
    ptr=start;
    start=temp;
}
display();

}

int main()
{
    int choice;
    while(1)
    {
        cout<<"\nenter an option below\n";
        cin>>choice;
        switch(choice)
        {
        
            case 1:insert_at_last();
            break;
            case 2:reverse();
            break;
            case 3:search();
            break;
            case 4:display(); 
            break;
            case 5:exit(0);
        }
    }
    return 0;
}