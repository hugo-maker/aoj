#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }

  cin >> m;
  vector<int> B(m);
  for (int i = 0; i < m; ++i)
  {
    cin >> B[i];
  }

  vector<int> result;
  set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(result, result.end()));

  for_each(result.begin(), result.end(), [] (int x) {cout << x << endl;});

  return 0;
}
