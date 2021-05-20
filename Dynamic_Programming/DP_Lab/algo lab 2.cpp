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
    ll t,t1,a,b,p,c,d,D,q,s=0,s1=0,s2=0,s3=0,x4,low,high,mid;
    ll n,k,m,m1,e,x=0,x1,x2=0,x3,x5;
    ll j;
///------------------BINARY SEARCH-------------------///
    cout<<"How many numbers in the list? ";cin>>n;
    cout<<"\nEnter the list of elements :\n";
    for(int i=1;i<=n;i++){
        cin>>x6[i];
    }
    ///SELECTION SORTING
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
    }cout<<endl;
    ///SORTING ENDED
    cout<<"Enter the element to search : ";cin>>x1;cout<<endl;

    low=1;high=n;j=0;
    while(low<=high && j==0){x2++;
        mid=floor((low+high)/2);
        if(x1==x6[mid])j=mid;
        else if(x1<x6[mid])high=mid-1;
        else low=mid+1;
    }
    cout<<"Location: "<<j<<endl;
    cout<<"Number of comparisons to sort the list: "<<x<<endl<<"Number of comparisons to search the element: "<<x2<<endl;

    return 0;
}
