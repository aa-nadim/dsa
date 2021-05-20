#include<bits/stdc++.h>
using namespace std;

struct data {
    char name[100];
    int height, weight;
    long long income;
};

bool compare( data a, data b ) {
    if( a.income == b.income ) {
        if( a.height == b.height ) {
            if( a.weight == b.weight )
                return strlen( a.name ) < strlen( b.name );
            else
                return a.weight < b.weight;
        }
        else
            return a.height > b.height;
    }
    else
        return a.income > b.income;
}

int main()
{
    struct data a;
    vector< int > v;
    sort( v.begin(), v.end(), compare );

}
