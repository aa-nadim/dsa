#include<bits/stdc++.h>
using namespace std;
//int a[10]={0,9,8,7,6,5,4,3,2,1};
int margesort(int a[],int n,int q, int r)
{
    int b[r];
    int p=n;
    int s=p,t=q+1,k=p;
    while(s<=q && t<=r)
    {
        if(a[s]<=a[t])
        {
            b[k]=a[s];
            s++;
        }
        else
        {
            b[k]=a[t];
            t++;
        }
        k++;
    }
    if(s==q+1)
    {
        for(int i=k;i<=r;i++)
            {
                b[i]=a[t];
                t++;
            }
    }
    else
    {
        for(int i=k;i<=r;i++)
        {
            b[i]=a[s];
            s++;
        }
    }
    for(int i=p;i<=r;i++)
    {

        a[i]=b[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //return a;
}


int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)cin>>a[i];
    int t=1;
    while(t<n)
    {
        int s=t;
        t=2*s;
        int i=0;
        while((i+t)<=n)
            {
                margesort(a,i+1,i+s,i+t);
                i+=t;
            }
        if(i+s<n)margesort(a,i+1,i+s,n);
    }
    return 0;
}
