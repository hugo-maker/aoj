#include <iostream>
using namespace std;

int main()
{
  int x;
  int count = 1;
  while (cin >> x)
  {
    if (x == 0)
    {
      break;
    }
    else
    {
      cout << "Case " << count << ": " << x << endl;
      ++count;
    }
  }

  return 0;
}
