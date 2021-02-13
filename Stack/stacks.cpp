#include<iostream>
using namespace std;
int top=-1;
int arr[6];
void push(int value)
{
    top++;
    arr[top]=value;
}
void pop()
{
    top--;
}
void print()
{
    cout<<"Stacks  ";
    for(int i=0;i<=top;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    push(5);
    print();
    push(2);
    print();
    push(6);
    print();
    push(1);
    print();
    push(9);
    print();
    push(3);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
}






