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
  int *x = new int; // *x will be on the stack and allocates memory on heap
  // reference value 'y' (alias another piece of memory which allows us to give a name to a piece of memory) 
  int &y = *x; // in other words, 'y' is the alias for the integer that 'x' points to.
  y = 4; // This assigns the value 4 to the integer that both x points to and y refers to.

  cout << &x << endl; // This prints the address of the pointer x itself on the stack (not the address it points to).
  cout << x << endl; // prints the int value of address in heap memory.
  cout << *x << endl; // 4

  cout << &y << endl; // this should be same as the mem address of x on the stack
  cout << y << endl; // 4
  // cout << *y << endl; // cant dereference a value of a non pointer.

  return 0;
}
