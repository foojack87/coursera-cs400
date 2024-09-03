/**
 * C++ program using the std::vector class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <vector>
#include <iostream>

int main() {
  std::vector<int> v; // template type = int, alias v
  v.push_back( 2 ); // push_back adds 2 to the last position in vector v.
  v.push_back( 3 );
  v.push_back( 5 );

  std::cout << v[0] << std::endl; // 2
  std::cout << v[1] << std::endl; // 3
  std::cout << v[2] << std::endl; // 5

  return 0;
}
