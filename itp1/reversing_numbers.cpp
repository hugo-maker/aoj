#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> nums;
  int n;
  int tmp;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> tmp;
    nums.push(tmp);
  }

  for (int i = 0; !nums.empty(); ++i)
  {
    if (i)
    {
      cout << " ";
    }
    cout << nums.top();
    nums.pop();
  }
  cout << endl;

  return 0;
}
