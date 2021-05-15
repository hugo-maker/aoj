#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, x, y;
  cin >> n;
  vector<pair<int, int>> pairs;
  for (int i = 0; i < n; ++i)
  {
    cin >> x >> y;
    pairs.push_back({x, y});
  }
  sort(pairs.begin(), pairs.end());

  for (int i = 0; i < n; ++i)
  {
    cout << pairs[i].first << " " << pairs[i].second << endl;
  }

  return 0;
}
