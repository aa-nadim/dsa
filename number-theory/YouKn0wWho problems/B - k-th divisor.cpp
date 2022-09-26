#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+9;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   std::vector<ll> divi;
   ll n,k;cin>>n>>k;
   
   for(ll i=1;i*i<=n;i++){
      if(n%i==0){
         divi.push_back(i);
         if(i!=n/i)divi.push_back(n/i);
      }
   }
   sort(divi.begin(),divi.end());
   if(k-1<divi.size())
      cout<<divi[k-1]<<endl;
   else 
      cout<<-1<<endl;
   

   return 0;
}