
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,cn=0,cm=0,sortt=0;
    cout<<"Enter a number of array size:"<<endl;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<n+1; i++)
    {
        cin>>arr[i];
    }
    int temp;
    cout<<"Using selection sort for sorting data"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            ++sortt;
           if(arr[j]<arr[i])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;

           }
        }
    }

     for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"The number of comparision:"<<sortt<<endl;
}
