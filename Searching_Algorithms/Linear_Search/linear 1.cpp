
#include<iostream>
using namespace std;
int main()
{
    int a[12]={0,5,9,13,15,17,19,22,33,66,96,99};
    int n=11,j=1;
    int x;cin>>x;
    while(j<n && x!=a[j])
        j++;
    if(x==a[j])cout<<"found at "<<j<<endl;
    else cout<<"not found\n";
    return 0;

}
