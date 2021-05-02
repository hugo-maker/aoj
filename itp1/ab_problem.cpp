#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int d = a / b;
  int r = a % b;
  double f = static_cast<double>(a) / static_cast<double>(b);

  cout << fixed;
  cout << d << " " << r << " " << setprecision(15) << f << endl;

  return 0;
}
