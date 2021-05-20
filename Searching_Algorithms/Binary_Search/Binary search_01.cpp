
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int values[], int target, int n)
{
    int left,right,mid;
    left = 0;
    right =n-1;

   while(left<=right){
        mid=(left+right)/2;

     if(values[mid]<target){
         left=mid+1;
     }

     else if(values[mid]>target){
         right=mid-1;
     }

     else{
         return mid+1;
     }
   }
   return -1;                //key not found
 }

 int main()
 {
    int target,p;
    cin>>p>>target;
    int values[p];

    for(int i=0;i<p;i++){
        cin>>values[i];
    }
    cout<<binarySearch(values,target,p)<<endl;

}
