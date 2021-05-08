#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int n;
  while (true)
  {
    cin >> n;
    if (n == 0)
    {
      break;
    }
    int score[n];
    for (int i = 0; i < n; ++i)
    {
      cin >> score[i];
    }
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
      sum += score[i];
    }
    double average = sum / n;

    double tmp = 0;
    for (int i = 0; i < n; ++i)
    {
      tmp += (score[i] - average) * (score[i] - average);
    }

    double variance = tmp / n;
    cout << setprecision(10) << sqrt(variance) << endl;
  }

  return 0;
}
