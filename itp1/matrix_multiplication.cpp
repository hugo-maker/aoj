#include <iostream>
using namespace std;

int main()
{
  int n, m, l;
  cin >> n >> m >> l;

  int A[n][m];
  int B[m][l];
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      cin >> B[i][j];
    }
  }

  long long int C[n][l];
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      C[i][j] = 0;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      for (int k = 0; k < m; ++k)
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      cout << C[i][j];
      if (j < l - 1)
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
