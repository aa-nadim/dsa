#include<bits/stdc++.h>
using namespace std;
#define    ll             long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
        {
            string s;cin>>s;
            int n=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='E')n++;
            }
            if(s.length()-n==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    return 0;
}

