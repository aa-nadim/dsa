#include<iostream>
#include<vector>
using namespace std;
const int N = 1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    vector<int> v(N + 1, 0), u(N + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> x;
        v[x]++;
    }
    for(int i = 1; i <= N; i++){
        for(int j = i; j <= N; j += i){
            u[i] += v[j];
        }
    }
    for(int i = 1; i <= N; i++) cout << u[i] << '\n';
    return 0;
}
