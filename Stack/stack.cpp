#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack< int > plate;
    plate.push( 100 ); // inserting 100
    plate.push( 101 ); // inserting 101
    plate.push( 102 ); // inserting 102

    while( !plate.empty() ) {
        cout << plate.top() << endl; // printing the top
        plate.pop(); // removing that one
    }
}

