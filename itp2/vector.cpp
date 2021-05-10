#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> A;
  int q;
  cin >> q;
  int query, temp;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0) // push_back
    {
      cin >> temp;
      A.push_back(temp);
    }
    else if (query == 1) // random access
    {
      if (!A.empty())
      {
        cin >> temp;
        cout << A[temp] << endl;
      }
    }
    else if (query == 2) // pop_back
    {
      if (!A.empty())
      {
        A.pop_back();
      }
    }
  }

  return 0;
}
