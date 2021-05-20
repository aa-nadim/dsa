///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int

class Node {
public:
	int data;
	Node *next;
};
void push(Node **head_ref, int new_data){
    Node *new_node = new Node();

    new_node->data = new_data;
    new_node->next = *head_ref;

    *head_ref = new_node;
}
void insertAfter(Node *prev_node, int new_data){
    Node *new_node = new Node();
    if(prev_node == NULL){
        cout<<"the given previous node connot be NULL";return;
    }
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void appEnd(Node **head_ref, int new_data){
    Node *new_node = new Node();
    Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){ *head_ref = new_node; return; }
    else while(last->next != NULL)last = last->next;

    last->next = new_node;
    return;
}

void printList(Node *node) {
    while (node != NULL) {
        cout<<" "<<node->data;
        node = node->next;
    }
}
int main(){
	Node *head = NULL;
	appEnd(&head, 6);
	appEnd(&head, 5);

	push(&head, 7);
	push(&head, 1);


	insertAfter(head->next, 8);

    ///cout<<"head->next = "<<head->next<<endl;
    ///cout<<"head = "<<head<<endl;
	cout<<"Created Linked list is: ";
    printList(head);

	return 0;
}



