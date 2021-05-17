#include <iostream>
#include <set>
using namespace std;

int main()
{
  int q, query, x, L, R;
  cin >> q;
  multiset<int> S;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 1)
    {
      cin >> x;
      cout << S.count(x) << endl;
    }
    else if (query == 0)
    {
      cin >> x;
      S.insert(x);
      cout << S.size() << endl;
    }
    else if (query == 2)
    {
      cin >> x;
      S.erase(x);
    }
    else if (query == 3)
    {
      cin >> L >> R;
      auto L_iter = S.lower_bound(L);
      auto R_iter = S.upper_bound(R);

      for (auto iter = L_iter; iter != R_iter; ++iter)
      {
        cout << *iter << endl;
      }
    }
  }

  return 0;
}
