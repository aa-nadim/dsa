#include<iostream>
using namespace std;

//function to recursive check every subset of items
int knapsack(int w[], int p[], int n, int M)
{
    //In every pass, we can either include nth item or not

    //if the capacity of knapsack is left to NIL, no value can be attained
    if(M==0)
        return 0;

    //if no more items are left, no value can be attained
    if(n==0)
        return 0;

    //if current item, weighs more than the capacity of knapsack, it can not be included
    if(w[n-1]>M)
        cout <<(w,p,n-1,M)<<endl;

    //else select the maximum value of once including the current item and once not including it
    cout <<max(knapsack(w,p,n-1,M),p[n-1]+knapsack(w,p,n-1,M-w[n-1]));
    cout<<endl;
}

int main()
{
    int i,n;
    int M;  //capacity of knapsack

    cout<<"Enter the no. of items ";
    cin>>n;

    int w[n];  //weight of items
    int p[n];  //value of items

    cout<<"Enter the weight and price of all items"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>w[i]>>p[i];
    }

    cout<<"enter the capacity of knapsack  ";
    cin>>M;

    cout<<"The maximum value of items that can be put into knapsack is "<<knapsack(w,p,n,M);

    return 0;
}
