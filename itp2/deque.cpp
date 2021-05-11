#include <iostream>
#include <deque>
using namespace std;

int main()
{
  int q;
  cin >> q;

  int query;
  int d, x, p;
  deque<int> A;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> d >> x;
      if (d == 0)
      {
        A.push_front(x);
      }
      else if (d == 1)
      {
        A.push_back(x);
      }
    }
    else if (query == 1)
    {
      if (!A.empty())
      {
        cin >> p;
        cout << A[p] << endl;
      }
    }
    else if (query == 2)
    {
      if (!A.empty())
      {
        cin >> d;
        if (d == 0)
        {
          A.pop_front();
        }
        else if (d == 1)
        {
          A.pop_back();
        }
      }
    }
  }

  return 0;
}
