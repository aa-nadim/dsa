#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=0;i<n;i++){
        int sum,x;
        sum=x=a[i];
        for(int j=i+1;j<n;j++){
            //cout<<"X == "<<x<<endl;
            x=x+a[j];
            sum=max(sum,x);
        }
        //cout<<"Sum == "<< sum<<endl;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}
