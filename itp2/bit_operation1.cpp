#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  unsigned long long int x;
  cin >> x;
  bitset<32> b(x);
  cout << b << endl;

  bitset<32> reverse = ~b;
  cout << reverse << endl;

  bitset<32> left_shift = b << 1;
  cout << left_shift << endl;

  bitset<32> right_shift = b >> 1;
  cout << right_shift << endl;

  return 0;
}
