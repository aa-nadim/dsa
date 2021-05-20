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
    vector <int>vec;
    vector <int>::iterator it;

    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(5);

    cout<<vec.size()<<endl;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }
    vec.clear();
    cout<<vec.size()<<endl;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }

    return 0;
}



