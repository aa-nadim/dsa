
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,j,n,k,temp,count=0;cin>>n;

    for(i=0;i<n;i++)
        cin>>arr[i];
        jaa
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[k])
                k=j;
            count++;
            }
            if(k!=i){
               temp=arr[i];
               arr[i]=arr[k];
               arr[k]=temp;
            }
    }cout<<"Selection Sort : Number of comparison:"<<count<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }cout<<endl;
    return 0;
}


