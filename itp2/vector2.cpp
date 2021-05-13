#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<vector<int>> A(n);
  int query, t, x;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0) // push_back
    {
      cin >> t >> x;
      A[t].push_back(x);
    }
    else if (query == 1) // dump
    {
      cin >> t;
      if (A[t].empty())
      {
        cout << endl;
      }
      else
      {
        for (int i = 0; i < A[t].size(); ++i)
        {
          if (i > 0)
          {
            cout << " ";
          }
          cout << A[t][i];
        }
        cout << endl;
      }
    }
    else if (query == 2) // clear
    {
      cin >> t;
      if (!A[t].empty())
      {
        A[t].clear();
      }
    }
  }

  return 0;
}
