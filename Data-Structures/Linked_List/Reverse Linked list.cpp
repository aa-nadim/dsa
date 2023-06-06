#include <iostream>
using namespace std;

//Creating Node Structure
struct Node{
 int data;
 Node *link;
};

Node *head=NULL;

//Function to reverse linked list
void reverseList()
{
    Node *previous,*current,*next;
    previous=NULL;
    current=head;
    while(current!=NULL)
    {
     next=current->link;
     current->link=previous;
     previous=current;
     current=next;
    }
    head=previous;
}

//Function to insert at the end of linked list
void insertEnd (int d){
 Node *ptr = new Node();
 ptr->data=d;
 ptr->link=NULL;

 if(head==NULL)head=ptr;
 else{
  Node *temp = head;

  while(temp->link != NULL) temp=temp->link;

  temp->link=ptr;
 }
}

//Function to display linked list
void displayList(){
 Node *ptr=head;
 while(ptr!=NULL){
  cout<<ptr->data<<" ";
  ptr=ptr->link;
 }
 cout<<"\n";
}

//Main Function
int main()
{
 insertEnd(1);
 insertEnd(2);
 insertEnd(3);
 insertEnd(4);
 insertEnd(5);

 displayList();
 reverseList();
 displayList();
 return 0;
}
