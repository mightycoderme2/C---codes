#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int middle()
{
    Node * ptr=head;
    int count=0;
    while(ptr!= NULL) {
        count++;
        ptr=ptr->next;
    }
    ptr=head;
    count=count/2;
    while(count>0)
    {
        ptr=ptr->next;
        count--;
    }
    return ptr->data;
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   cout<<middle();
   return 0;
}
