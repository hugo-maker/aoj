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
    auto lower_pos = distance(A.begin(), iter);
    iter = upper_bound(A.begin(), A.end(), k);
    auto upper_pos = distance(A.begin(), iter);
    cout << lower_pos << " " << upper_pos << endl;
  }

  return 0;
}
