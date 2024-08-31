/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x; // pointer x on stack
  int size = 3;  // int size = 3 on stack
  x = new int[size]; // allocates heap memory with an array of size 3 integers.

  for (int i = 0; i < size; i++) {
    x[i] = i + 3; // [3, 4, 5]
  }

  delete[] x;
}
