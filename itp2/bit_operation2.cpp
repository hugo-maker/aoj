#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  unsigned long long int a, b;
  cin >> a >> b;
  bitset<32> binary_a(a);
  bitset<32> binary_b(b);

  bitset<32> result = binary_a & binary_b;
  cout << result << endl;

  result = binary_a | binary_b;
  cout << result << endl;

  result = binary_a ^ binary_b;
  cout << result << endl;

  return 0;
}
