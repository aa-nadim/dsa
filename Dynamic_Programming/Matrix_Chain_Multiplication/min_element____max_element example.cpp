/// min_element/max_element example

#include <iostream>     // std::cout
#include <algorithm>    // std::min_element, std::max_element


int main () {
  int myints[] = {3,7,2,5,6,4,9};

  std::cout << "The smallest element is " << *std::min_element(myints,myints+7) << '\n';
  std::cout << "The largest element is "  << *std::max_element(myints,myints+7) << '\n';


  return 0;
}
