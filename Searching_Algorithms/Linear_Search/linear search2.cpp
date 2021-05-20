#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,9,6,0},i,n;
    n=6;
    for(i=0;i<10;i++)
    {
        if(a[i]==n){
            printf("%d ",i+1);
        return 0;
        }
    }
    printf("Not founded\n");
    return 0;
}
