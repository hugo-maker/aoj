#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); ++i)
  {
    char ch = str[i];
    if (isalpha(ch))
    {
      if (islower(ch))
      {
        ch = toupper(ch);
        cout << ch;
      }
      else
      {
        ch = tolower(ch);
        cout << ch;
      }
    }
    else
    {
      cout << ch;
    }
  }
  cout << endl;

  return 0;
}
