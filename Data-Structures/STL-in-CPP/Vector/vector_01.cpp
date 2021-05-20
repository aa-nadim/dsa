
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector< int > vec(5,-2);
    vec.push_back(11);


    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << endl;

    return 0;
}
