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
void insert_at_beg(int x)
{
    struct node *temp,*ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    temp=start;
    ptr->next=NULL;
    ptr->data=x;
    if(start=NULL)
    {
        start=ptr;
    }
    else
    {
        ptr->next=temp;
        start=ptr;
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
}
void rotate()
{
    struct node *temp;
    int pos;
    cout<<"enter the number of rotations in list";
    cin>>pos;
    for(int i=0;i<pos;i++)
    {
        temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
        insert_at_beg(temp->data);
        delete_at_last();
    }
    display();

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
        
            case 1:
            int value;
            cout<<"enter the value of the node";
            cin>>value;
            insert_at_beg(value);
            display();
            break;
            case 2:rotate();
            break;
            case 3:display(); 
            break;
            case 4:exit(0);
        }
    }
    return 0;
}