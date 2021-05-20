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
///------------------SELECTION SORT-------------------///
    cout<<"How many numbers in the list? ";cin>>n;
    cout<<"\nEnter the list of elements :\n";
    for(int i=1;i<=n;i++){
        cin>>x6[i];
    }

    for(int i=1;i<n;i++){
        k=i;
        for(j=i+1;j<=n;j++){if(x6[j]<x6[k])k=j;
        x++;
        }
        if(k!=i){
            c=x6[k];
            x6[k]=x6[i];
            x6[i]=c;
        }
    }
    cout<<"Sorted list:\n";
    for(int i=1;i<=n;i++){
        cout<<x6[i]<<" ";
    }
    cout<<"\nNumber of comparisons: "<<x<<endl;

    return 0;
}
