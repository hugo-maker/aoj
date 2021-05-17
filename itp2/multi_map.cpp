#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  int q, query, x;
  string key, L, R;
  multimap<string, int> M;

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> key >> x;
      M.insert(make_pair(key, x));
    }
    else if (query == 1)
    {
      cin >> key;
      auto iter = M.find(key);
      if (iter != M.end())
      {
        size_t num_pairs_in_M = M.count(key);
        for (size_t count = 0; count < num_pairs_in_M; ++count)
        {
          cout << iter->second << endl;
          ++iter;
        }
      }
    }
    else if (query == 2)
    {
      cin >> key;
      M.erase(key);
    }
    else if (query == 3)
    {
      cin >> L >> R;
      auto L_iter = M.lower_bound(L);
      auto R_iter = M.upper_bound(R);

      for (auto iter = L_iter; iter != R_iter; ++iter)
      {
        cout << iter->first << " " << iter->second << endl;
      }
    }
  }

  return 0;
}
