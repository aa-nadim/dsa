#include<bits/stdc++.h>
using namespace std;

int main(){
            int n;cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)cin>>arr[i];

            int ans = 0;

            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i; j < n; j++) {
                    sum += arr[j];
                    ans = max(ans,sum);
                }
            }
            cout << ans << "\n";
    return 0;
}
///8
///-1 2 4 -3 5 2 -5 2

///10

