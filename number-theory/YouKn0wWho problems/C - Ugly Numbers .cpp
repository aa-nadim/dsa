#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isUgly(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)  while(n%i==0)n /= i;
        if(i>5) return false;
    }
    if(n>5)return false;
    else return true;
}

int main()
{
    ll n=2,cnt=1;
    while(cnt<1500){
        if(isUgly(n))cnt++;
        n++;
    }
    cout<<--n<<endl;
    return 0;
}
