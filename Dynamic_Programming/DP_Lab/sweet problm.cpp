//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll ans,a[4];a[0]=0;
        for(ll i=1;i<=3;i++)cin>>a[i];
        sort(a,a+4);
        //for(ll i=1;i<=3;i++)
          //  cout<<a[i]<<ses;
        if(a[1]==a[2] && a[2]==a[3])
        {
            int x=a[1]/2;
            a[1]+=x;ans=a[1];
        }
        else if(a[2]==a[3])
            ans=a[2]+a[1]/2;
        else if(a[1]==a[2])
            ans=a[1]+min(a[1],a[3]-a[1]);
        else if(a[1]+a[2]<=a[3])ans=a[1]+a[2];
        else
        {
            ll ans1=a[1];ans1+=min(a[2],a[3]-a[1]);
            ll ans2=a[2];ans2+=min(a[1],a[3]-a[2]);
            ll ans3=a[1];ans3+=(a[2]-a[1]);
           // cout<<ans1<<" "<<ans2<<" "<<ans3<<ses;
            ans=max(ans1,max(ans2,ans3));
        }
        cout<<ans<<ses;
    }

    return 0;
}





///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই খাওয়া দাওয়া                    😋😍
///                    🍔🍔🍔🍔🍰🍔🍔
///                      🍦🍨🍳🍧🍔🍔
///                    🍗🍗🍗🍗🍔🍔🍔🍔
///                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
///                    🤤🤤🤤🤤🤤🤤🤤🤤

