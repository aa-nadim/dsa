#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+9;
int spf[N];

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   ll n;cin>>n;
   ll g=0;
   for(int i=0;i<n;i++){
      ll x;cin>>x;
      g=__gcd(g,x);
   }
   //cout<<g<<endl;
   ll cnt=0;
   for(int i=1;i*1ll*i<=g;i++){
      if (g % i == 0) {
            if (g / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
   }
   cout<<cnt<<endl;
   
   return 0;
}
