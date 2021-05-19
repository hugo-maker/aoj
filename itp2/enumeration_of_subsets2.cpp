#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main()
{
  unsigned int n, k, b, limit;
  bitset<32> U;
  vector<int> pos_info;
  bool flag;

  pos_info.clear();
  cin >> n >> k;
  for (unsigned int i = 0; i < k; ++i)
  {
    cin >> b;
    pos_info.push_back(b);
  }

  limit = 1 << n;
  for (unsigned int num = 0; num < limit; ++num)
  {
    U &= 0;
    U |= num;
    flag = true;
    for (unsigned int pos = 0; pos < k; ++pos)
    {
      if (!U.test(pos_info[pos]))
      {
        flag = false;
        break;
      }
    }
    if (!flag)
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
