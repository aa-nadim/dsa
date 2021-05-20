#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[12]={0,5,9,13,15,17,19,22,33,66,96,99};
    int high=11,low=1,mid,j=0,complexity=0,x;
    cout<<"Enter the search number : ";
    cin>>x;
    while(low<=high && j==0)
    {
        complexity++;
        mid=floor((low+high)/2);
        if(x==a[mid])j=mid;
        else if(x<a[mid])high=mid-1;
        else low=mid+1;
    }
    cout<<j<<endl;
    if(j!=0)cout<<"Found at :"<<j<<endl;
    else cout<<"Not Found"<<endl;
    cout<<"Time complexity "<<complexity<<endl;
    return 0;
}
