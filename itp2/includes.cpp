#include <iostream>
#include <algorithm>
#include <vector>
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

  cout << includes(A.begin(), A.end(), B.begin(), B.end()) << endl;

  return 0;
}
