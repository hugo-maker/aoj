#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  pair<int, int> result = minmax({a, b, c});

  cout << result.first << " " << result.second << endl;

  return 0;
}
