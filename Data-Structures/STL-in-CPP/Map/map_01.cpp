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

    m["nadim"]=43;
    m["akib"]=12;
    m["nion"]=33;
    m["asif"]=22;
    m["rakib"]=99;
    m.insert(make_pair("nadim",43));

    printf("%d",m["nadim"]);
    return 0;
}


