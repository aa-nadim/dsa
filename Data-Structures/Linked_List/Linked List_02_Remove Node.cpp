///.................................///
///...BISMILLAHIR RAHMANIR RAHEEM...///
///...............Nadim.............///
///.................................///
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;

#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999

using namespace std;

//*****************Data type**********************//
typedef long long ll;
typedef long long int lli;
typedef unsigned long long  ull;
typedef unsigned long long int ulli;

//****************SET**************************//
typedef set<int> SI;
typedef set<string> SS;
typedef set<char>SC;
typedef multiset<int>MSI;

//*****************Map****************************//
typedef map<int, int> mp;
typedef map<int, string> mps;
typedef map<int, char>mpc;
typedef map<string, int>mpsi;
typedef map<char, int>mpci;

//****************Pair****************************//
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef pair<char, char> pcc;
typedef pair<int, string> pis;
typedef pair<int, char> pic;

//*****************Vector************************//
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<lli> VLLI;
typedef vector<VI> VVI;
typedef vector<pii> VPI;

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

Node *remove_node(Node *head,Node *node)
{
    if(node==head){
        head=node->next;
        free(node);
        return head;
    }
    Node *current_node=head;
    while(current_node!=NULL){
        if(current_node->next==node){
            break;
        }
        current_node=current_node->next;
    }
    if(current_node==NULL){
        return head;
    }
    current_node->next=node->next;
    free(node);
    return head;
}
int main()
{

    return 0;
}



///...........................Alhamdulillah........................////




