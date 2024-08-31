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
  int *p, *q; // create pointer 'p' and pointer 'q' on the stack memory.
  p = new int; // p is now allocating heap memory
  q = p; // q is now also using same heap memory as p
  *q = 8; // value at pointer 'q' is 8 
  cout << *p << endl; // 8

  q = new int; // q is now allocating its own new heap memory
  *q = 9; // value at pointer 'q' is 9
  cout << *p << endl; // 8
  cout << *q << endl; // 9

  return 0;
}
