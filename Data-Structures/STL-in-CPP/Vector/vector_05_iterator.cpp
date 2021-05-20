
// C++ code to demonstrate the working of
// next() and prev()
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
    vector<int> vec;

    // Declaring iterators to a vector
    vector<int>::iterator ptr ;
    vector<int>::iterator ftr ;

    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }
    ptr= vec.begin();
    ftr= vec.end();
    // Using next() to return new iterator
    // points to 4
    auto it = next(ptr, 3);

    // Using prev() to return new iterator
    // points to 3
    auto it1 = prev(ftr, 3);

    // Displaying iterator position
    cout << "The position of new iterator using next() is : ";
    cout << *it << " ";
    cout << endl;

    // Displaying iterator position
    cout << "The position of new iterator using prev()  is : ";
    cout << *it1 << " ";
    cout << endl;

    return 0;
}
