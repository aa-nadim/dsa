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
    map< string, int  > m;
    map< string, int  > :: iterator it;


    m["nadim"]=43;
    m["akib"]=12;
    m["nion"]=33;
    m["asif"]=22;
    m["rakib"]=99;
    m.insert(make_pair("nadim",43));

    /*it=m.begin();
    ++it;
    cout<<it->first<<endl;
    cout<<it->second<<endl;*/
    for(it = m.begin();it!=m.end();++it)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}



