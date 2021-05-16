#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n, q, k;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> k;
    auto iter = lower_bound(A.begin(), A.end(), k);
    auto pos = distance(A.begin(), iter);
    cout << pos << endl;
  }

  return 0;
}
