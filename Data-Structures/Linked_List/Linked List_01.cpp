#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

Node *creat_node(int item,Node *next)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    if(new_node==NULL){
        cout<<"Error! Could Not Create A New Node"<<endl;
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
int main()
{
    Node *n;
    n=creat_node(10,NULL);
    cout<<"data = "<<n->data<<endl;

    return 0;
}



///...........................Alhamdulillah........................////



