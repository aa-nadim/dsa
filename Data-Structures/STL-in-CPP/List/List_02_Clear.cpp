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
    list <float>mylist;
    list <float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_back(5);
    mylist.push_front(30);
    mylist.push_front(-1);

    mylist.reverse();
    cout<<mylist.size()<<endl;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }

    mylist.clear();
    cout<<mylist.size()<<endl;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }


    return 0;
}


