#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 3; i <= n; ++i)
  {
    int x = i;
    if (x % 3 == 0)
    {
      cout << " " << i;
    }
    else
    {
      do
      {
        if (x % 10 == 3)
        {
          cout << " " << i;
          break;
        }
        x /= 10;
      } while (x);
    }
  }
  cout << endl;

  return 0;
}
