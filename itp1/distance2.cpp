#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;

  double x[n];
  double y[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> x[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> y[i];
  }

  double manhattan = 0;
  double euclid = 0;
  double p_three = 0;
  double chebyshev = 0;

  for (int i = 0; i < n; ++i)
  {
    manhattan += abs(x[i] - y[i]);
  }

  double tmp = 0;
  for (int i = 0; i < n; ++i)
  {
    tmp += abs(x[i] - y[i]) * abs(x[i] - y[i]);
  }
  euclid = sqrt(tmp);

  tmp = 0;
  for (int i = 0; i < n; ++i)
  {
    tmp += abs(x[i] - y[i]) * abs(x[i] - y[i]) * abs(x[i] - y[i]);
  }
  p_three = cbrt(tmp);

  for (int i = 0; i < n; ++i)
  {
    if (abs(x[i] - y[i]) > chebyshev)
    {
      chebyshev = abs(x[i] - y[i]);
    }
  }

  cout << setprecision(10);
  cout << manhattan << endl;
  cout << euclid << endl;
  cout << p_three << endl;
  cout << chebyshev << endl;

  return 0;
}
