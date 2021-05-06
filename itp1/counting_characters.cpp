#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  char ch = '\0';
  int counter[26];
  for (int i = 0; i < 26; ++i)
  {
    counter[i] = 0;
  }
  while (cin >> ch)
  {
    ch = tolower(ch);
    int num = ch - 'a';
    counter[num]++;
  }

  char alphabet = 'a';
  for (int i = 0; i < 26; ++i)
  {
    cout << alphabet++ << " : " << counter[i] << endl;
  }

  return 0;
}
