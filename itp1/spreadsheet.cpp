#include <iostream>
using namespace std;

int main()
{
  int r, c;
  cin >> r >> c;
  int spreadsheet[r + 1][c + 1];

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      cin >> spreadsheet[i][j];
    }
  }
  for (int i = 0; i <= r; ++i)
  {
    spreadsheet[i][c] = 0;
  }
  for (int i = 0; i <= c; ++i)
  {
    spreadsheet[r][i] = 0;
  }

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      spreadsheet[i][c] += spreadsheet[i][j];
    }
  }

  for (int i = 0; i <= c; ++i)
  {
    for (int j = 0; j < r; ++j)
    {
      spreadsheet[r][i] += spreadsheet[j][i];
    }
  }

  for (int i = 0; i <= r; ++i)
  {
    for (int j = 0; j <= c; ++j)
    {
      cout << spreadsheet[i][j];
      if (j < c)
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
