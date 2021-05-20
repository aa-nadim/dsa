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
    list <float>mylist(4,5);
    list <float>::iterator it;

    cout<<mylist.size()<<endl;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<"\t";
    }



    return 0;
}



