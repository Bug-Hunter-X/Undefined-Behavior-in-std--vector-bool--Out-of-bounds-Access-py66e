#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(5);
  int i = 10;

  // Incorrect way: potential out-of-bounds access
  //bool b = vec[i]; // This is incorrect and unsafe!

  // Safe way 1: Check bounds before accessing
  if (i >= 0 && i < vec.size()) {
    bool b = vec[i];
    std::cout << "Element at index " << i << ": " << b << std::endl; 
  } else {
    std::cout << "Index out of bounds" << std::endl;
  }

  // Safe way 2: Use at() for bounds checking
  try {
    bool b = vec.at(i); 
    std::cout << "Element at index " << i << ": " << b << std::endl; 
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << std::endl;
  }

  return 0;
}
