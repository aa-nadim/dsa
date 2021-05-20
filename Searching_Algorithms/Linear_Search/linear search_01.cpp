#include<bits/stdc++.h>

using namespace std;

int linearSearch(int values[], int target, int n)
{
    for(int i = 0; i < n; i++)
    {
        if (values[i] == target)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int target,n;
    cin>>n>>target;
    int values[n];

    for(int i=0;i<n;i++){
        cin>>values[i];
    }
    cout<<linearSearch(values,target,n)<<endl;

}
