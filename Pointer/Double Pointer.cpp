///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int var = 5;
    int *ptr2;
    int **ptr1;

    ptr2 = &var;
    ptr1 = &ptr2;

    cout<<"var = "<<var<<endl<<endl;

    cout<<"&var = "<<&var<<endl;
    cout<<"ptr2 = "<<ptr2<<endl<<endl;

    cout<<"*ptr2 = "<<*ptr2<<endl<<endl;

    cout<<"&ptr2 = "<<&ptr2<<endl;
    cout<<"ptr1 = "<<ptr1<<endl<<endl;

    cout<<"*ptr1 = "<<*ptr1<<endl;

    cout<<"**ptr1 = "<<**ptr1<<endl<<endl;
  return 0;
}
