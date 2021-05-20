
#include<iostream>
using namespace std;
int main()
{
    while(1){
    int a[10]={0,33,6,32,66,51,100,88,67,34};
    int n=9,j=1;
    int x;cin>>x;
    while(j<n && x!=a[j])j++;
    if(x==a[j])cout<<"found at "<<j<<endl;
    else cout<<"not found\n";
    }
    return 0;

}
