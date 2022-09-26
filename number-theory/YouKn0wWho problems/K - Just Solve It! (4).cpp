#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+9;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   ll n,m,l,r;cin>>n>>m>>l>>r;
   if(m>n)swap(n,m);

   ll lcm=n/__gcd(n,m);
   if(lcm > r/m)
     cout<< 0 << endl;
   else{
      lcm *= m;
      ll a=r/lcm;
      ll b=(l-1)/lcm;
      cout<<a-b<<endl;
   }
   
   return 0;
}