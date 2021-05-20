#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[10]={0,33,6,32,66,51,100,88,67,34};
    int n=9;
    int high=n,low=1,mid,j=0,complexity=0,x;
    for(int i=2;i<=n;i++)
    {
        int k=a[i];
        int y=i-1;
        while(y>0 && a[y]>k)
        {
            a[y+1]=a[y];
            y--;
            complexity++;
        }
        a[y+1]=k;
    }
    cout<<"sorted complexity "<<complexity<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"\nEnter the search number : ";
    cin>>x;
    int binacom=0;
    while(low<=high && j==0)
    {
        binacom++;
        mid=floor((low+high)/2);
        if(x==a[mid])j=mid;
        else if(x<a[mid])high=mid-1;
        else low=mid+1;
    }
    cout<<"search complexity :"<<binacom<<endl;
    if(j!=0)cout<<"Found at :"<<j<<endl;
    else cout<<"Not Found"<<endl;
    cout<<"Total Time complexity "<<complexity+binacom<<endl;
    return 0;
}
