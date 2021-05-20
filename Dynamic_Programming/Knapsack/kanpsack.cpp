

#include<bits/stdc++.h>
using namespace std;
int v[100][100];
    int maxprofit(int *wi,int *b,int MW,int n)
    {

    for(int i=0;i<=MW;i++)
        v[0][i]=0;
    for(int i=1;i<=n;i++)
        v[i][0]=0;

        for(int i=1;i<=n;i++)
        {
            for(int w=0;w<=MW;w++)
            {
                if(wi[i]<=w)
               {
                   if((b[i]+v[i-1][w-wi[i]])>v[i-1][w])
                   {
                     v[i][w]= b[i]+v[i-1][w-wi[i]];
                   }
                   else
                       v[i][w]=v[i-1][w];
               }
               else
                   v[i][w]=v[i-1][w];

            }

            }


      return v[n][MW];
    }


    void answer(int *wi,int W,int n)
    {
    int ans[n];
        for(int i=0;i<=n;i++)
        {
            ans[i]=0;
        }
    int i=n,k=W;
    while(i>0 && k>0)
    {
        if(v[i][k]!=v[i-1][k])
        {
            ans[i]=1;
            k=k-wi[i];i=i-1;
        }
        else
            i=i-1;
    }
    for(i=1;i<=n;i++)
        cout<<ans[i];
    cout<<endl;

}


    void print(int MW,int n)
   {
     for(int i=0;i<=n;i++)
        {
            for(int w=0;w<=MW;w++)
            {
                cout<<v[i][w]<<" ";
            }
            cout<<endl;
        }
   }
    int main() {

        int wi[10];
        int b[10];
        cout<<"Enter the number of items\n";
        int n;cin>>n;/// element number
        cout<<"Enter weights\n";
        for(int k=1;k<=n;k++)
        {
           cin>>wi[k];

        }
        cout<<"Enter profits\n";
        for(int k=1;k<=n;k++)
        {

           cin>>b[k];
        }
        cout<<"Enter max Capacity\n";
        int W;cin>>W;
        int k=maxprofit(wi,b,W,n);
        cout<<"Max Profit  "<<k<<endl;
        print(W,n);
        answer(wi,W,n);
        return 0;
}


