///Insertion Sort
///W----->n^2
///B----->n

///List_01:n=11
///5 9 13 15 17 19 22 33 66 96 99
///List_02:n=9
///33 6 32 66 51 100 88 67 34
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,j,n,temp,count=0;cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(int k=1; k<n; k++){
        int temp = arr[k];
        int j= k-1;
        while(j>=0 && temp <= arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
            count++;
        }
        arr[j+1] = temp;
    }cout<<"Selection Sort : Number of comparison:"<<count<<endl<<endl;

    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}
