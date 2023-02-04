#include <iostream>

int main() {

  try {
    std::cout << "Hello from cmkr!\n";
  } catch (...) {
    std::cout << "CXX Exception with mcmodel\n";
  }

  return 0;
}