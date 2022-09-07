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

   for(int i=2;i<N;i++){
      spf[i]=i;
   }
   for(int i=2;i<N;i++){
      for(int j=i;j<N;j+=i){
         spf[j]=min(spf[j],i);
      }
   }
   int n,x;
   cin>>n;
   for(int i=1;i<=n;i++){
      cin>>x;
      ll lpf,gpf,dpf,tpf,nd,sd;
      lpf=spf[x],gpf=0,dpf=0,tpf=0,nd=1,sd=1;

      while(x>1){
         ll d=spf[x];
         dpf++;
         gpf=max(gpf,d);
         ll cnt=0;
         while(x % d==0){
            cnt++;
            tpf++;
            x /= d;
         }
         nd *= (cnt+1);
         sd *= ((pow(d,cnt+1)-1)/(d-1));
      }

      //cout<<lpf<<" "<<gpf<<" "<<dpf<<" "<<tpf<<" "<<nd<<" "<<sd<<endl;
      printf("%lld %lld %lld %lld %lld %lld\n",lpf,gpf,dpf,tpf,nd,sd);
   }
   
   return 0;
}
