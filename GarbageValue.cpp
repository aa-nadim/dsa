///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
using namespace std;

const int N = 1e8 ;
#define    ll             long long int

int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    //ll test;cin>>test;while(test--)
    {
        vector<int>v;
        v.push_back(2);
        for(int i=3;i<=N;i++){
            bool ok=true;
            for(int j=2;j*j<=i; j++){
                if(i%j==0){
                    ok=false;break;
                }
            }
            if(ok)v.push_back(i);
        }
        for(int i=0;i<v.size();i+=100)cout<<v[i]<<endl;
    }

return 0;
}
