#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
#define    ll             long long int
int main()
{
    int te=1;//cin>>t;
    while(te--){
        ll n;cin>>n;
        ll a[n],t[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];//b[i]=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>t[i];
            b[i]=a[i]+t[i];
        }
        sort(b,b+n);
        //int x=(b[0]+b[n-1])/2;
        cout<<(b[0]+b[n-1])/2<<endl;
    }
    return 0;
}
