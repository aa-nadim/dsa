#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},i,item,str=0,end=8,mid;
    item=5;
    while(str<=end)
    {
        mid=(str+end)/2;

        if(a[mid]==item)
        {
            cout<<mid+1;
            return 0;
        }
        else if(a[mid]>item)
            str=mid+1;
        else
            end=mid-1;
    }


    return 0;
}
