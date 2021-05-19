#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  unsigned int n, k, b, limit;
  bitset<32> U, T;

  cin >> n >> k;
  for (unsigned int i = 0; i < k; ++i)
  {
    cin >> b;
    T.set(b, 1);
  }

  limit = 1 << n;
  for (unsigned int num = 0; num < limit; ++num)
  {
    U &= 0;
    U |= num;
    if ((U | T) != T)
    {
      continue;
    }
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
