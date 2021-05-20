include<iostream>
using namespace std;
void toh(int n,char beg,char aux,char end)
{
    if(n==1)
        cout<<"Move Disk   "<<beg<<"  to  "<<end<<endl;
    else
    {
        toh(n-1,beg,end,aux);
        toh(1,beg,aux,end);
        toh(n-1,aux,beg,end);
    }
}
int main()
{
    int x=3;
    char a='A',b='B',c='C';
    toh(x,a,b,c);
    return 0;
}
