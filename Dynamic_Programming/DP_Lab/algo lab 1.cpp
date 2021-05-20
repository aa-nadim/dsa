#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 2*acos(0.0)

ll x6[100000];
vector<ll>v;

int main()
{
    ll t,t1,a,b,p,c,d,D,q,s=0,s1=0,s2=0,s3=0,x4;
    ll n,k,m,m1,e,x=0,x1,x2,x3,x5;
    ll j;
    //int t3[11]={5,9,13,15,17,19,22,33,66,96,99};
///----------------LINEAR SEARCH-------------------///
    cout<<"How many numbers in the list? ";cin>>n;
    cout<<"\nEnter the list of elements :\n";
    for(int i=1;i<=n;i++){
        cin>>x6[i];//x++;
    }
    cout<<"Enter the element to search : ";cin>>x1;cout<<endl;
    j=1;
    while(j<n && x1!=x6[j]){
        j++;x++;
    }
    if(x1==x6[j]){cout<<"Location: "<<j<<endl;x++;}
    else cout<<"Not found\n"<<endl;
    cout<<"Number of comparison: "<<x<<endl;

    return 0;
}
