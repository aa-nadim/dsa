// C++ code to demonstrate the working of
/// advance()
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec ;

    // Declaring iterator to a vector
    vector<int>::iterator it ;
    it= vec.begin();

    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }
    it= vec.begin();
    // Using advance() to increment iterator position
    // points to 4
    advance(it, 3);

    // Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *it << " ";

    return 0;

}
