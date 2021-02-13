///Selection Sort......
///W----->n^2
///B----->n^2

///List_01:n=11
///5 9 13 15 17 19 22 33 66 96 99
///List_02:n=9
///33 6 32 66 51 100 88 67 34
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,j,n,k,temp,count=0;cin>>n;

    for(i=0;i<n;i++)
        cin>>arr[i];
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


