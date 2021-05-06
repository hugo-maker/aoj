#include <iostream>
#include <string>
using namespace std;

int main()
{
  string taro;
  string hanako;
  int score[2] = {0, 0};

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> taro >> hanako;
    if (taro > hanako)
    {
      score[0] += 3;
    }
    else if (taro < hanako)
    {
      score[1] += 3;
    }
    else
    {
      score[0] += 1;
      score[1] += 1;
    }
  }

  cout << score[0] << " " << score[1] << endl;

  return 0;
}
