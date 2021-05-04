#include <iostream>
using namespace std;

int main()
{
  int m, l, r;
  bool already_printed = false;
  while (true)
  {
    already_printed = false;
    cin >> m >> l >> r;
    if (m == -1 && l == -1 && r == -1)
    {
      break;
    }
    if (m == -1 || l == -1)
    {
      cout << 'F' << endl;
      already_printed = true;
    }

    // point
    if (!already_printed)
    {
      int score = m + l;
      if (score >= 80)
      {
        cout << 'A' << endl;
      }
      else if (score >= 65 && score < 80)
      {
        cout << 'B' << endl;
      }
      else if (score >= 50 && score < 65)
      {
        cout << 'C' << endl;
      }
      else if (score >= 30 && score < 50)
      {
        if (r >= 50)
        {
          cout << 'C' << endl;
        }
        else 
        {
          cout << 'D' << endl;
        }
      }
      else
      {
        cout << 'F' << endl;
      }
    }
  }

  return 0;
}
