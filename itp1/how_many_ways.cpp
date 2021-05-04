#include <iostream>
using namespace std;

int main()
{
  int n, x, count;
  while (true)
  {
    count = 0;
    cin >> n >> x;
    if (n == 0 && x == 0)
    {
      break;
    }

    int nums[n];
    nums[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
      nums[i] = i;
    }

    for (int i = 1; i <= n; ++i)
    {
      for (int j = i + 1; j <= n; ++j)
      {
        for (int k = j + 1; k <= n; ++k)
        {
          int sum = i + j + k;
          if (sum == x)
          {
            ++count;
          }
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}
