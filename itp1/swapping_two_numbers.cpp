#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums(2);
  while (true)
  {
    cin >> nums.at(0) >> nums.at(1);
    if (nums.at(0) == 0 && nums.at(1) == 0)
    {
      break;
    }
    sort(nums.begin(), nums.end());
    cout << nums.at(0) << " " << nums.at(1) << endl;
  }

  return 0;
}
