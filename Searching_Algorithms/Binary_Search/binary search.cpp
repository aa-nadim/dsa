///List_01:n=11
///5 9 13 15 17 19 22 33 66 96 99
///List_02:n=9
///33 6 32 66 51 100 88 67 34
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],num,n,high,low,mid,i,j,k,temp,count=0;
    cout<<"Enter number of list :";cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
///Selection Sort......
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
        cout<<arr[i]<<" ";
    }cout<<endl;
///Binary Search......
    cout<<"choose any number :";cin>>num;
    high=n;low=1;i=0;count=0;
    while(low<=high && i==0){
        mid=(low+high)/2;
        if(num==arr[mid])
            i=mid;
        else if(num<arr[mid])
            high=mid-1;
        else
            low=mid+1;count++;
    }
    if(i==0)
        cout<<"Not in the list"<<endl;
    else
        cout<<"the index number is:"<<i+1<<endl;
    cout<<"Number of comparison:"<<count<<endl;
    return 0;
}

