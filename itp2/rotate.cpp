#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n, q, b, m, e;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> b >> m >> e;
    rotate(A.begin() + b, A.begin() + m, A.begin() + e);
  }

  for (auto iter = A.begin(); iter != A.end(); ++iter)
  {
    if (iter != A.begin())
    {
      cout << " ";
    }
    cout << *iter;
  }
  cout << endl;

  return 0;
}
