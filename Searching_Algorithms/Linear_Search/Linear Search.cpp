///List_01:n=11
///5 9 13 15 17 19 22 33 66 96 99
///List_02:n=9
///33 6 32 66 51 100 88 67 34
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],num,count=0,i,n;
    cout<<"Enter number of list :";cin>>n;
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<"choose any number : ";cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]==num){
            count++;
            break;
        }
    }
    if(count==1)
        cout<<"the index number is : "<<i+1<<endl;
    else
        cout<<"Not in the list"<<endl;
    return 0;
}
