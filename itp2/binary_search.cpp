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

  int q;
  cin >> q;
  int k;
  for (int i = 0; i < q; ++i)
  {
    cin >> k;
    cout << binary_search(A.begin(), A.end(), k) << endl;
  }

  return 0;
}
