#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={88,22,44,11,33,77,55,66,99,10};
    int x=55,i;
    for(i=0;i<10;i++){
        if(x==arr[i])
            break;
    }
    cout<<i+1<<endl;
    return 0;
}
