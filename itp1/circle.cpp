#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  static const double pi = M_PI;
  double r;
  cin >> r;

  cout << fixed;
  cout << setprecision(10) << r * r * pi << " " << 2 * r * pi << endl;

  return 0;
}
