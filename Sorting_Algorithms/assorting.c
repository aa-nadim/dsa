 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[1000],temp;


    scanf("%d",&n) ;


    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


        printf("%d\n",a[n-1]-a[0]) ;
        return 0;

}

