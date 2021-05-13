#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
  int n, q, query, t, x;
  cin >> n >> q;
  vector<priority_queue<int>> Q(n);

  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> t >> x;
      Q[t].push(x);
    }
    else if (query == 1)
    {
      cin >> t;
      if (!Q[t].empty())
      {
        cout << Q[t].top() << endl;
      }
    }
    else if (query == 2)
    {
      cin >> t;
      if (!Q[t].empty())
      {
        Q[t].pop();
      }
    }
  }

  return 0;
}
