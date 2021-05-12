#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main()
{
  list<int> L;
  auto iter = L.end();

  int q;
  cin >> q;
  int query, x, d;

  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> x;
      L.insert(iter, x);
      --iter;
    }
    else if (query == 1)
    {
      cin >> d;
      if (d > 0)
      {
        for (int i = 0; i < d; ++i)
        {
          ++iter;
          if (iter == L.end())
          {
            break;
          }
        }
      }
      else if (d < 0)
      {
        d = abs(d);
        for (int i = 0; i < d; ++i)
        {
          --iter;
        }
      }
    }
    else if (query == 2)
    {
      auto temp = iter;
      ++temp;
      L.erase(iter);
      iter = temp;
    }
  }

  for (auto iter = L.begin(); iter != L.end(); ++iter)
  {
    cout << *iter << endl;
  }

  return 0;
}
