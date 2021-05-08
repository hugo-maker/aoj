#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  double a, b, C;
  double PI = acos(-1);
  cin >> a >> b >> C;
  double rad_C = C * PI / 180;

  double S, L, h;
  S = a * b * sin(rad_C) / 2;
  h = 2 * S / a;

  double c = sqrt(a * a + b * b - 2 * a * b * cos(rad_C));
  L = a + b + c;

  cout << setprecision(10);
  cout << S << endl;
  cout << L << endl;
  cout << h << endl;

  return 0;
}
