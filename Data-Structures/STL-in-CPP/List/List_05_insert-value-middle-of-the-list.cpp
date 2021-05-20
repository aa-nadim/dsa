#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<queue>
#include<string>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={5,2,1,6,3};

    list <int>mylist(arr,arr+5);
    list <int>::iterator it;

    it=find(mylist.begin(),mylist.end(),6);

    cout<<*it<<endl;
    mylist.insert(it,-1);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }

    return 0;
}



