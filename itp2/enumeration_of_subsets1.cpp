#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  unsigned int n, limit;
  bitset<32> U;

  cin >> n;
  limit = 1 << n;
  for (unsigned int num = 0; num < limit; ++num)
  {
    U &= 0;
    U |= num;
    cout << num << ":";
    for (unsigned int pos = 0; pos < n; ++pos)
    {
      if (!U.test(pos))
      {
        continue;
      }
      cout << " " << pos;
    }
    cout << endl;
  }

  return 0;
}
