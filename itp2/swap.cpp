#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, q, b, e, t;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> b >> e >> t;
    for (int k = 0; k < e - b; ++k)
    {
      swap(A[b + k], A[t + k]);
    }
  }

  for (int i = 0; i < n; ++i)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << A[i];
  }
  cout << endl;

  return 0;
}
