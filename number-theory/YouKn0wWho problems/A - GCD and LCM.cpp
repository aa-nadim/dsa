#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+9;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int t;cin>>t;
   while(t--){
      ll a,b;cin>>a>>b;
      ll gcd=__gcd(a,b);
      ll lcm=(a/gcd)*b;
      cout<<gcd<<" "<<lcm<<endl;
   }
   
   return 0;
}