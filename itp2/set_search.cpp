#include <iostream>
#include <set>
using namespace std;

int main()
{
  int q, query, x;
  cin >> q;
  set<int> S;
  for (int i = 0; i < q; ++i)
  {
    cin >> query >> x;
    if (query)
    {
      if (S.find(x) != S.end())
      {
        cout << 1 << endl;
      }
      else
      {
        cout << 0 << endl;
      }
    }
    else
    {
      S.insert(x);
      cout << S.size() << endl;
    }
  }

  return 0;
}
