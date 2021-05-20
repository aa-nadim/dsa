
#include<stdio.h>
#include<math.h>

main()
{

int k, m, n, i, j, t, divider, array[100], a[10][10], valuu[10], p=0, q=0;

printf("\nEnter the number of digits:");
scanf("%d",&k);

printf("\nHow many numbers?");
scanf("%d", &n);

printf("\nEnter the values to be sorted:");
for(i=0; i<n; i++)
{
scanf("%d", &array[i]);
}


int index[10];
for(i=0;i<10;i++)
index[i]=0;

for(i=0;i<n;i++)
valuu[i]=array[i];

i=0,j=0,t=0;
do{
while(i<n && p<n)
{


    m=(valuu[p]%10);

for(j=0;j<10;j++){
if(m==j)
{
    a[j][index[j]]=array[i];
    printf("\n%d", a[j][index[j]]);
    index[j]=index[j]+1;
    break;
}
}
i++;
p++;
}

printf("\n");

for(i=0;i<n;i++)
printf("%d \t", array[i]);

int temp=0;
i=0;
while(i<n && temp<10)
{
    j=0;

    //printf("%d\t",index[temp]);
    if(index[temp]==0){
    temp++;
    printf("\n%d", temp);
    continue;
    }
    else
    {
        while(j<(index[temp]))
        {
            printf("%d\t%d\t%d\t%d", temp, i, j, index[temp]);
            array[i+j]=a[temp][j];
            printf("\t%d",a[temp][j]);

            j++;

        }


    }
    i=i+j;
    temp++;

}

for(i=0;i<n;i++)
printf("%d \t", array[i]);

printf("\n");

for(i=0;i<n;i++)
printf("%d \t", array[i]);

p=0;
t++;
divider= pow(10,t);
printf("\n\n");
printf("\n%d\n", t);
for(i=0;i<n;i++){
valuu[p]=(array[i])/divider;
printf("%d\t", valuu[p]);
p++;

}
printf("\n\n");
for(i=0;i<10;i++)
index[i]=0;
q++;
p=0;
i=0;
}while(q<k);

printf("\nThe values after sorting:");
for(i=0;i<n;i++)
printf("%d\t",array[i]);

}
