#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *start=NULL;

void display()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        cout<<"empty";
    }
    else
    {
    while(temp->next!=start)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->";
    }
}

void insert_at_last()
{
    struct node *temp,*ptr;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    cout<<"enter the node data";
    cin>>ptr->data;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;
        ptr->prev=start;
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        } 
        temp->next=ptr;
        ptr->prev=temp;
        start->prev=ptr;
        ptr->next=start;

    }
    display();
}

void insert_at_beg()
{
    struct node *temp,*ptr;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    cout<<"enter the node data";
    cin>>ptr->data;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;
        ptr->prev=start;
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        } 
        temp->next=ptr;
        ptr->prev=temp;
        start->prev=ptr;
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
    cout<<"enter the node data";
    cin>>ptr->data;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;
        ptr->prev=start;
    }
    else
    {
        int pos;
        cout<<"enter the position of the node";
        cin>>pos;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next->prev=ptr;
        ptr->next=temp->next;
        temp->next=ptr;
        ptr->prev=temp;
    }
    display();
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
        while(temp->next!=start)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=start;
        start->prev=ptr;
        temp->next=NULL;
        temp->prev=NULL;
        free(temp);
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
        display();
    }
    else
    {
        start=start->next;
        delete_at_last();
    }
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
        cout<<"enter the position";
        cin>>pos;
        for(int i=0;i<pos-1;i++)
        {
            ptr=temp;
            temp=temp->next;
        }
        temp->next->prev=ptr;
        ptr->next=temp->next;
        temp->prev=NULL;
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