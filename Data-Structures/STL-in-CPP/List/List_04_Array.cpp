#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<queue>
#include<string>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int arr[5]={5,2,1,6,3};

    list <float>mylist(arr,arr+5);
    list <float>::iterator it;

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }




    return 0;
}


