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
    ll test;test=1;
    cin>>test;
    while(test--)
    {
        map<char, int> mp;
        map<char, int>::iterator it;
        string s;cin>>s;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        //cout<<mp.size()<<endl;
        if((n%2==1 && mp.size()>2) || (n%2==0 && mp.size()>1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

return 0;
}
