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
    A[i] = i + 1;
  }

  sort(A.begin(), A.end());
  
  do
  {
    print(A);
  } while (next_permutation(A.begin(), A.end()));

  return 0;
}
