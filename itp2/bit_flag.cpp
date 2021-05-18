#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  int q, query, i;
  bitset<64> flag(0);

  cin >> q;
  for (int j = 0; j < q; ++j)
  {
    cin >> query;
    if (query < 4)
    {
      cin >> i;
    }

    switch (query)
    {
      case 0: // test(i)
      {
        cout << flag.test(i) << endl;
        break;
      }
      case 1: // set(i)
      {
        flag.set(i);
        break;
      }
      case 2: // clear(i)
      {
        flag.reset(i);
        break;
      }
      case 3: // flip(i)
      {
        flag.flip(i);
        break;
      }
      case 4: // all
      {
        cout << flag.all() << endl;
        break;
      }
      case 5: // any
      {
        cout << flag.any() << endl;
        break;
      }
      case 6: // none
      {
        cout << flag.none() << endl;
        break;
      }
      case 7: // count
      {
        cout << flag.count() << endl;
        break;
      }
      case 8: // val
      {
        unsigned long long value = flag.to_ullong();
        cout << value << endl;
        break;
      }
    }
  }

  return 0;
}
