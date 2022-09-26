#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+9;

int main()
{
   int n;cin>>n;
   if(n%2==0){
    cout<<n/2<<endl;
    for(int i=1;i<=n/2;i++)cout<<2<<" ";cout<<endl;
   }
   else{
    cout<<n/2<<endl;
    for(int i=1;i<n/2;i++)cout<<2<<" ";cout<<3<<endl;
   }

   return 0;
}
