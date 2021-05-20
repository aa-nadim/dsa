#include<bits/stdc++.h>

using namespace std;

int main() {
    vector< int > v, nadim;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    nadim = v; // copying
    for(int i=0; i<nadim.size(); i++)
        cout << nadim[i] << endl;

    return 0;
}
