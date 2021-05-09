#include <iostream>
#include <string>
using namespace std;

class Dice
{
public:
  int U, D, N, E, S, W, temp;

  Dice (int u, int s, int e, int w, int n, int d)
    : U(u), S(s), E(e), W(w), N(n), D(d) {}

  void turnN()
  {
    temp = D;
    D = N;
    N = U;
    U = S;
    S = temp;
  }
  void turnE()
  {
    temp = W;
    W = D;
    D = E;
    E = U;
    U = temp;
  }
  void turnS()
  {
    temp = D;
    D = S;
    S = U;
    U = N;
    N = temp;
  }
  void turnW()
  {
    temp = W;
    W = U;
    U = E;
    E = D;
    D = temp;
  }
  void turn_right()
  {
    temp = W;
    W = S;
    S = E;
    E = D;
    D = temp;
  }
  void turn_left()
  {
    temp = W;
    W = N;
    N = E;
    E = S;
    S = temp;
  }
};

int main()
{
  int u, d, n, e, s, w;
  cin >> u >> s >> e >> w >> n >> d;
  Dice dice(u, s, e, w, n ,d);

  string order;
  cin >> order;
  for (int i = 0; i < order.size(); ++i)
  {
    if (order[i] == 'N')
    {
      dice.turnN();
    }
    else if (order[i] == 'E')
    {
      dice.turnE();
    }
    else if (order[i] == 'S')
    {
      dice.turnS();
    }
    else if (order[i] == 'W')
    {
      dice.turnW();
    }
  }

  cout << dice.U << endl;

  return 0;
}
