#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;

int main()
{
    int n,x;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        int temp=sqrt(x);
        bool ok=true;

        if(x==1 || temp*temp!=x){
            ok=false;
        }
        else{
            for(int j=2;j*j<=temp;j++){
                if(temp%j==0){
                    ok=false;
                    break;
                }
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

