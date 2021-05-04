#include <iostream>
using namespace std;

// spade 0
// hart 1
// club 2
// diamond 3

int main()
{
  char suits[4] = {'S', 'H', 'C', 'D'};
  int ranks[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

  bool is_missing[4][13];
  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 13; ++j)
    {
      is_missing[i][j] = true;
    }
  }

  char suit;
  int rank;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> suit >> rank;
    rank -= 1;
    switch (suit)
    {
      case 'S':
      {
        is_missing[0][rank] = false;
        break;
      }
      case 'H':
      {
        is_missing[1][rank] = false;
        break;
      }
      case 'C':
      {
        is_missing[2][rank] = false;
        break;
      }
      case 'D':
      {
        is_missing[3][rank] = false;
        break;
      }
      default:
      {
        break;
      }
    }
  }

  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 13; ++j)
    {
      if (is_missing[i][j])
      {
        cout << suits[i] << " " << ranks[j] << endl;
      }
    }
  }

  return 0;
}
