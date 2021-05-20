#include<bits/stdc++.h>
using namespace std;
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
    int a[11]={0,1,3,5,7,9,2,4,6,8,10};
    //int c[11];
    int n,q,r;
    cin>>n>>q>>r;
    margesort(a,n,q,r);
    for(int i=n;i<=r;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
