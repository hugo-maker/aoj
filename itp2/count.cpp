#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n, q, b, e, k;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> b >> e >> k;
    cout << count(A.begin() + b, A.begin() + e, k) << endl;
  }

  return 0;
}
