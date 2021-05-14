#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }
  int q, query, b, e;
  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> query >> b >> e;
    if (query) // max
    {
      auto iter = max_element(A.begin() + b, A.begin() + e);
      cout << *iter << endl;
    }
    else // min
    {
      auto iter = min_element(A.begin() + b, A.begin() + e);
      cout << *iter << endl;
    }
  }

  return 0;
}
