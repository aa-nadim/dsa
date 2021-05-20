#include<stdio.h>
#include<math.h>

struct List
{
    int value;
    struct List* next;
};


struct List *Listhead[10], *Listpre[10];



int main()
{
int n=0, val, k, m, p, divider, count[10], valuu[100];
struct List* head= (struct List*) malloc (sizeof(struct List));
struct List* Head=head;
struct List* LHead[10];

printf("\nEnter the number of digits:");
scanf("%d",&k);

printf("\nEnter the value of the first node:");
scanf("%d",&head->value);
    while(head->value!=999)
    {
        n++;
        head->next= (struct List*) malloc (sizeof(struct List));
        head=head->next;
        printf("\nEnter the value of the nodes:");
        scanf("%d",&val);
        head->value=val;



    }
    if(head->value==999)
    {
        head->next=NULL;
    }
head=Head;
int i,j=1;
//printf("\n%d",Head->value);
    while(head->value!=999)
    {
        printf("%d\t",head->value);
        valuu[j]=head->value;
        head= head->next;
        j++;
    }
    if(head->value==999)
    {
        printf("\tNull");
    }

    j=1;
    p=1;

    do{
    head=Head;

    for(i=0; i<=9; i++)
    {
    LHead[i]=(struct List*) malloc (sizeof(struct List));
    Listhead[i]=LHead[i];
    Listpre[i]=LHead[i];
    count[i]=0;
    }



    while(head->value!=999)
    {

        divider= pow(10,j);
        m=(valuu[p]%10);


printf("\n%d\t%d",m, val);

        for(i=0; i<=9; i++){
        if(m==i){


            count[i]=count[i]+1;
            Listhead[i]->value=head->value;
            Listhead[i]->next=(struct List*) malloc (sizeof(struct List));
            printf("\t%d",Listhead[i]->value);
            Listpre[i]=Listhead[i];
            printf("\nList values:%d", Listpre[i]->value);
            Listhead[i]=Listhead[i]->next;


    }
        }

    p++;
    head=head->next;
    }

    printf("\nOut of the loop:::");
    if(head->value==999)
    {
        printf("\n%d",head->value);
    for(i=0; i<=9; i++)
    {

    Listpre[i]->next=NULL;


    }
    }

    printf("\nOut of the loop:::");

head=Head;

for(i=0; i<=9; i++){
Listpre[i]=LHead[i];
if(count[i]==0)
Listpre[i]->value=999;
}

i=0;
p=1;
while(i<=9 && head->value!=999)
{
Listhead[i]=LHead[i];

do
{
    if(Listpre[i]->value==999)
    break;
    else{
head->value=Listhead[i]->value;
printf("\t%d",head->value);
valuu[p]=(head->value)/divider;
head=head->next;
Listpre[i]=Listhead[i];
Listhead[i]=Listhead[i]->next;
p++;
    }
} while(Listpre[i]->next!=NULL);
i++;
}

j++;

for(p=1;p<=n;p++){

printf("\t%d", valuu[p]);
}
p=1;
    }while(j<=k);



head=Head;

printf("\n");
while(head->next!=NULL)
{

printf("%d\t", head->value);
head=head->next;
}



}
