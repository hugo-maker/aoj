#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  int q, query, x;
  string key;
  map<string, int> M;

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    cin >> query;
    if (query == 0)
    {
      cin >> key >> x;
      auto iter = M.find(key);
      if (iter != M.end())
      {
        iter->second = x;
      }
      else
      {
        M.insert(make_pair(key, x));
      }
    }
    else if (query == 1)
    {
      cin >> key;
      auto iter = M.find(key);
      cout << iter->second << endl;
    }
  }

  return 0;
}
