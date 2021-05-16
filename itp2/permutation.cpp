#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> v)
{
  for (auto iter = v.begin(); iter != v.end(); ++iter)
  {
    if (iter != v.begin())
    {
      cout << " ";
    }
    cout << *iter;
  }
  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }
  vector<int> prev(n);
  vector<int> next(n);
  copy(A.begin(), A.end(), prev.begin());
  copy(A.begin(), A.end(), next.begin());

  if(prev_permutation(prev.begin(), prev.end()))
  {
    print(prev);
  }

  print(A);

  if(next_permutation(next.begin(), next.end()))
  {
    print(next);
  }

  return 0;
}
