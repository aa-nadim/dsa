#include<bits/stdc++.h>
#include<iostream>
#include<vector>   /// for vectors
#include<iterator> /// for iterators
using namespace std;

int main()
{
    vector< int > vec;
    vector<int>::iterator it;  /// Declaring iterator to a vector
    it = vec.begin();
    /*vector<double>vec1;
    vector<double>::iterator it1;
    it1 = vec1.begin();

    vector<char>vec2;
    vector<char>::iterator it2;
    it2 = vec2.begin();*/
    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << "\t";
    }
    cout<<endl<<endl;;

    /// Displaying vector elements using begin() and end()
    for(it = vec.begin();it<vec.end();it++){
        cout<<*it<<"\t";
    }

    puts("");

    return 0;
}


