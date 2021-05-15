#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, q, b, e;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> b >> e;
    reverse(A.begin() + b, A.begin() + e);
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
}
