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

bool isPrime(int n) {
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;cin>>n;
    cout<<isPrime(n);
    return 0;
}

