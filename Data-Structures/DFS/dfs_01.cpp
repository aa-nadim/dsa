#include<bits/stdc++.h>
using namespace std;
bool vis[1000005];
int dis[1000005];
void bfs(int node,int dest)
{
    queue<int>q;
    vis[node]=true;
    dis[node]=0;
    q.push(node);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        if(node<dest){
            int cur=node*2;
            if(!vis[cur]){
                vis[cur]=true;
                dis[cur]=dis[node]+1;
                q.push(cur);
                if(cur==dest || node==dest) break;
            }
        }
        if(node==0) continue;
        int cur=node-1;
        if(!vis[cur]){
            vis[cur]=true;
            dis[cur]=dis[node]+1;
            q.push(cur);
            if(cur==dest) break;
        }
    }
}
int main()
{
    int n,dest;
    cin>>n>>dest;
    bfs(n,dest);
    cout<<dis[dest]<<endl;
}
