#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main()
{
  // mask set
  int n, k, b;
  cin >> n;
  vector<bitset<64>> mask(n);

  for (int i = 0; i < n; ++i)
  {
    mask[i].reset();
  }

  for (int i = 0; i < n; ++i)
  {
    cin >> k;
    for (int j = 0; j < k; ++j)
    {
      cin >> b;
      mask[i].set(b);
    }
  }

  // query
  int q, query, i, m;
  bitset<64> flag(0);

  cin >> q;
  for (int j = 0; j < q; ++j)
  {
    cin >> query;

    switch (query)
    {
      case 0: // test(i)
      {
        cin >> i;
        cout << flag.test(i) << endl;
        break;
      }
      case 1: // set(m)
      {
        cin >> m;
        flag |= mask[m];
        break;
      }
      case 2: // clear(m)
      {
        cin >> m;
        flag &= ~mask[m];
        break;
      }
      case 3: // flip(m)
      {
        cin >> m;
        flag ^= mask[m];
        break;
      }
      case 4: // all
      {
        cin >> m;
        cout << ((flag & mask[m]) == mask[m]) << endl;
        break;
      }
      case 5: // any
      {
        cin >> m;
        cout << (flag & mask[m]).any() << endl;
        break;
      }
      case 6: // none
      {
        cin >> m;
        cout << (flag & mask[m]).none() << endl;
        break;
      }
      case 7: // count
      {
        cin >> m;
        cout << (flag & mask[m]).count() << endl;
        break;
      }
      case 8: // val
      {
        cin >> m;
        cout << (flag & mask[m]).to_ulong() << endl;
        break;
      }
    }
  }

  return 0;
}
