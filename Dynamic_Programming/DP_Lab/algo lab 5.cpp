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
///------------------BOTTOM_UP_MERGE SORT-------------------///33 6 32 66 51 100 88 67 34
    cout<<"How many numbers in the list? ";cin>>n;
    cout<<"\nEnter the list of elements :\n";
    for(int i=1;i<=n;i++){
        cin>>x6[i];
    }

    for(int i=2;i<=n;i++){
        x2=x6[i];
        j=i-1;
        while(j>0 && x6[j]>x2){
            x6[j+1]=x6[j];
            j=j-1;
            x++;
        }
        x6[j+1]=x2;
    }

    cout<<"Sorted list:\n";
    for(int i=1;i<=n;i++){
        cout<<x6[i]<<" ";
    }
    cout<<"\nNumber of comparisons: "<<x<<endl;///n-1 to n*(n-1)/2

    return 0;
}
