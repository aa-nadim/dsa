///...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    REP(i,a,b)     for(int i = a; i <= b; i++)
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int
#define    F              first
#define    S              second
#define    pb             push_back
#define    mp             make_pair
#define    pi             acos(-1)
#define    all(x)         x.begin(),x.end()
int G[10][10],visited[10],n;
void DFS(int i){
	cout<<"\n"<<i;
    visited[i]=1;
	for(int j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}
int main(){
    cout<<"Enter number of vertices: ";
    cin>>n;
	cout<<"\nEnter adjecency matrix of the graph: ";
    int x;
	for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
			cin>>x,G[i][j]=x;
    for(int i=0;i<n;i++)
        visited[i]=0;

    DFS(0);

    return 0;
}


