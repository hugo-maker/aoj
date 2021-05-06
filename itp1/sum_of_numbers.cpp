#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str_num;

  while (true)
  {
    cin >> str_num;
    if (str_num.size() == 1)
    {
      int num = stoi(str_num);
      if (!num)
      {
        break;
      }
    }

    int result = 0;
    for (int i = 0; i < str_num.size(); ++i)
    {
      result += str_num[i] - '0';
    }
    cout << result << endl;
  }

  return 0;
}
