#include<iostream>
using namespace std;
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1,0},i,temp,j;

    for(j=0;j<10;j++)
    {

        for(i=0;i<10;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
