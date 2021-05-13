#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
  int n, q, query, t, x;
  cin >> n >> q;
  vector<queue<int>> S(n);

  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> t >> x;
      S[t].push(x);
    }
    else if (query == 1)
    {
      cin >> t;
      if (!S[t].empty())
      {
        cout << S[t].front() << endl;
      }
    }
    else if (query == 2)
    {
      cin >> t;
      if (!S[t].empty())
      {
        S[t].pop();
      }
    }
  }

  return 0;
}
