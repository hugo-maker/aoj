#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums;
  int n;
  cin >> n;

  int tmp;
  for (int i = 0; i < n; ++i)
  {
    cin >> tmp;
    nums.push_back(tmp);
  }
  sort(nums.begin(), nums.end());
  long int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    sum += nums.at(i);
  }

  cout << *(nums.begin()) << " " << *(nums.end() - 1) << " " << sum << endl;

  return 0;
}
