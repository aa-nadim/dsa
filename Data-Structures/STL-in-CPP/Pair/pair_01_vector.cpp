#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<stdio.h>
#include<queue>
#include<string>
#include<list>
#include<iterator>
#include<algorithm>
#include<utility>
using namespace std;


int main()
{
    vector< pair<string, int> > v;
    vector< pair<string, int> > :: iterator it;

    v.push_back(make_pair(33,"nadim"));
    v.push_back(make_pair(12,"nahid"));
    v.push_back(make_pair(44,"asif"));

    for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}




