#include <iostream>
using namespace std;

int main()
{
  int count[4][3][10];
  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 10; ++k)
      {
        count[i][j][k] = 0;
      }
    }
  }

  int n, b, f, r, v;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> b >> f >> r >> v;
    b -= 1;
    f -= 1;
    r -= 1;
    count[b][f][r] += v;
  }

  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 10; ++k)
      {
        cout << " " << count[i][j][k];
      }
      cout << endl;
    }
    if (i < 3)
    {
      cout << "####################" << endl;
    }
  }

  return 0;
}