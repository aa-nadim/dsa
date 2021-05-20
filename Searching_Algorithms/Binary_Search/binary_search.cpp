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
    int x;
    cout<<"You can apply binary search"<<endl;
    cout<<"enter a number for searching"<<endl;
    int first=1,last=n,mid=(first+last)/2;
    cin>>x;
    while(first<=last)
    {
         ++cm;
        if(x==arr[mid])
        {
          cout<<x<<" is found:its position: "<<mid<<endl;
          cn++;
          break;
        }
      else  if(x>arr[mid])
        {
            first=mid+1;
        }
        else
            last=mid-1;


            mid=(first+last)/2;
    }
    if(cn==0)cout<<"number of not found"<<endl;
    cout<<"Number of comparision:"<<"bin="<<cm<<" sort="<<sortt<<endl;
    cout<<"total ="<<sortt+cm<<endl;


}
