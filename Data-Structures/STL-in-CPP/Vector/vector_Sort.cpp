#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>

bool Decending(int a,int b){
    return (a>b);
}

using namespace std;


int main() {
    vector< int > vec;
    vector<int>::iterator it;
    vec.push_back(177);
    vec.push_back(22);
    vec.push_back(30);
    vec.push_back(455);

    sort(vec.begin(),vec.end(),Decending);


    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << endl;

    return 0;
}
