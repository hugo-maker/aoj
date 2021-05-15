#include <iostream>
#include <vector>
#include <algorithm>
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
  sort(A.begin(), A.end());
  auto iter = unique(A.begin(), A.end());
  A.erase(iter, A.end());

  for (iter = A.begin(); iter != A.end(); ++iter)
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
