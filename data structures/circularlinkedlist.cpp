#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void display()
{
    struct node *temp;
    temp=start;
    while(temp->next!=start)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->";
}
void insert_at_last()
{
    struct node *temp,*ptr;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    cout<<"enter the value of node";
    cin>>ptr->data;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;    
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=start;
    }
    display();
}
void insert_at_beg()
{
        struct node *temp,*ptr,*ptr2;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    cout<<"enter the value of node";
    cin>>ptr->data;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;    
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=start;
        start=ptr;
    }
    display();
}
void insert_at_pos()
{
    struct node *temp,*ptr;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    int pos;
    cout<<"enter the value of node";
    cin>>ptr->data;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;    
    }
    else
    {
        cout<<"enter the position";
        cin>>pos;
        for(int i=1;i<pos;i++)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
    display();
}
void delete_at_last()
{
    struct node *temp,*ptr;
    temp=start;
    ptr=start;
    if(start==NULL)
    {
        cout<<"empty";
    }
    else
    {
       while(temp->next!=start)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=start;
        temp->next=NULL;
        free(temp);
    }
}
void delete_at_beg()
{
    struct node *temp,*ptr;
    temp=start;
    ptr=start;
    if(start==NULL)
    {
        cout<<"empty";
    }
    else
    {
        start=start->next;
        delete_at_last();
    }
    display();
}
void delete_at_pos()
{
    struct node *temp,*ptr;
    temp=start;
    if(start==NULL)
    {
        cout<<"empty";
    }
    else
    {
        int pos;
        cout<<"enter postion";
        cin>>pos;
        if(pos==1)
        {
            delete_at_beg();
        }
        else
        {
            for(int i=0;i<pos-1;i++)
            {
                ptr=temp;
                temp=temp->next;
            }
            ptr->next=temp->next;
            free(temp);
        }
    }
}
void search()
{
    int value,pos=0;
    cout<<"enter value to be searched\n";
    cin>>value; 
    struct node *temp;
    temp=start;
    if(temp->data==value)
    {
        cout<<"element found at position "<<pos;
    }
    else
    {
    while(temp->next!=start)
    {
        if(temp->data==value)
        {
            cout<<"element found at position "<<pos;
        }
        pos=pos+1;
        temp=temp->next;
    }
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
            case 1:insert_at_last();
            break;
            case 2:insert_at_beg();
            break;
            case 3:insert_at_pos();
            break;
            case 4:delete_at_beg();
            break;
            case 5:delete_at_last();
            display();
            break;
            case 6:delete_at_pos();
            display();
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