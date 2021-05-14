#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
  int n, q, query, s, t, x, d;
  cin >> n >> q;
  vector<list<int>> L(n);

  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> t >> x;
      L[t].push_back(x);
    }
    else if (query == 1)
    {
      cin >> t;
      if (!L[t].empty())
      {
        for (auto iter = L[t].begin(); iter != L[t].end(); ++iter)
        {
          if (iter != L[t].begin())
          {
            cout << " ";
          }
          cout << *iter;
        }
        cout << endl;
      }
      else
      {
        cout << endl;
      }
    }
    else if (query == 2)
    {
      cin >> s >> t;
      L[t].splice(L[t].end(), std::move(L[s]));
    }
  }


  return 0;
}
