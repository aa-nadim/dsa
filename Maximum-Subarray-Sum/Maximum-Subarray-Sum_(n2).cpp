///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    //ll test;cin>>test;while(test--)
        {
            int n;cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)cin>>arr[i];
            int best = 0;
            for (int a = 0; a < n; a++) {
                int sum = 0;
                for (int b = a; b < n; b++) {
                    sum += arr[b];
                    best = max(best,sum);
                }
            }
            cout << best << "\n";
        }
return 0;
}
///8
///-1 2 4 -3 5 2 -5 2

///10

