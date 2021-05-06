#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
  string W;
  cin >> W;

  string word;
  int count = 0;
  while (true)
  {
    cin >> word;
    if (word == "END_OF_TEXT")
    {
      break;
    }

    transform(word.begin(), word.end(), word.begin(), ::tolower);
    if (word == W)
    {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
