#include<stdio.h>
int main()
{
    int i,j,n,count=0,search;
    int a[100];
    printf("Enter the number of binary search includded:\n");
    scanf("%d",&n);
    int first=0,last=n-1;
    int mid=(first+last)/2;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the seaching number::\n");
    scanf("%d",&search);
    while(1)
    {
        if (first<=last)
        {
            if(a[mid]==search)
            {
                printf("Found the number of search %d and its position %d\n",search,mid+1);
                break;
            }
            else if(a[mid]<search)
                first=mid+1;
            else
                last=mid-1;
        }

        if(first>last)
        {
            printf("%d is not found:",search);
            break;
        }
        mid=(first+last)/2;

    }


    return 0;

}
