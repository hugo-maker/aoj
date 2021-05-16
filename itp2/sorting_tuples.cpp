#include <iostream>
#include <tuple>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<tuple<int, int, char, unsigned long long int, string>> v;
  int value, weight; 
  char type;
  unsigned long long int date;
  string name;
  for (int i = 0; i < n; ++i)
  {
    cin >> value >> weight >> type >> date >> name;
    v.emplace_back(value, weight, type, date, name);
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n; ++i)
  {
    cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << " "
         << get<3>(v[i]) << " " << get<4>(v[i]) << endl;
  }

  return 0;
}
