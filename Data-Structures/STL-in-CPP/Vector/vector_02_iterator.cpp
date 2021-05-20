#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector< int > vec;
    vector<int>::iterator it;     /// Declaring iterator to a vector

    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << "\t";
    }
    puts("");

    it = vec.begin();
    cout<< *it << endl; ///pointer ar moto kaj kora

    it++;
    cout<< *it << endl;

    return 0;
}

