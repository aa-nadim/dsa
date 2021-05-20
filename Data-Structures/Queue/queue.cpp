#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue< int > bus_line;
    bus_line.push( 100 ); // inserting 100
    bus_line.push( 101 ); // inserting 101
    bus_line.push( 102 ); // inserting 102

    while( !bus_line.empty() ) {
        cout << bus_line.front() << endl; // printing the front
        bus_line.pop(); // removing that one
    }
}

