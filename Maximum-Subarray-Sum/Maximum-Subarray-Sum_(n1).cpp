#include<bits/stdc++.h>
using namespace std;
int main(){
            int n;cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)cin>>arr[i];
            int best = 0, sum = 0;
            for (int a = 0; a < n; a++) {
                sum = max(arr[a],sum+arr[a]);
                best = max(best,sum);
            }
            cout << best << "\n";
        }
return 0;
}
///8
///-1 2 4 -3 5 2 -5 2

///10


