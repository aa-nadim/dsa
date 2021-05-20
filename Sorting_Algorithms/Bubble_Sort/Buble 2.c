#include<stdio.h>
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1,0};
    int i, j, k, temp, z, n=10, m=1, p=2, e;

    for(k=0;k<n;k++)
    {
        e=1;
        for(i=0,j=i+1;i<n-1;i++,j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            if(e==1)
            {
                printf("Pass: %d\n", m);
                e=0;
            }
            for(z=0;z<n;z++)
                {
                    printf("%d ", a[z]);
                }
            printf("\n");}
        }
        printf("%\n\n");
        m++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
