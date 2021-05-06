#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string str, query, p;
  int q, a, b;

  cin >> str >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == "replace")
    {
      cin >> a >> b >> p;
      str = str.replace(a, b - a + 1, p);
    }
    else if (query == "reverse")
    {
      cin >> a >> b;
      reverse(str.begin() + a, str.begin() + b + 1);
    }
    else
    {
      cin >> a >> b;
      for (int i = a; i <= b; ++i)
      {
        cout << str[i];
      }
      cout << endl;
    }
  }

  return 0;
}
