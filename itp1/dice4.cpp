#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dice
{
public:
  int U, D, N, E, S, W, temp;

  Dice (int u, int s, int e, int w, int n, int d)
    : U(u), S(s), E(e), W(w), N(n), D(d) {}

  void spin()
  {
    temp = S;
    S = W;
    W = N;
    N = E;
    E = temp;
  }

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

  vector<Dice> make_dice()
  {
    vector<Dice> ret;
    for (int i = 0; i < 6; ++i)
    {
      Dice d(*this);
      if (i == 1)
      {
        d.turnN();
      }
      if (i == 2)
      {
        d.turnS();
      }
      if (i == 3)
      {
        d.turnS();
        d.turnS();
      }
      if (i == 4)
      {
        d.turnE();
      }
      if (i == 5)
      {
        d.turnW();
      }
      for (int j = 0; j < 4; ++j)
      {
        ret.push_back(d);
        d.spin();
      }
    }
    return (ret);
  }
};

bool solve(Dice dice1, vector<Dice> v)
{
  bool is_same = false;
  for (int i = 0; i < 24; ++i)
  {
    if (dice1.U == v[i].U &&
        dice1.S == v[i].S &&
        dice1.E == v[i].E &&
        dice1.W == v[i].W &&
        dice1.N == v[i].N &&
        dice1.D == v[i].D)
    {
      is_same = true;
      break;
    }
    else
    {
      continue;
    }
  }

  return is_same;
}


int main()
{
  int N, u, d, n, e, s, w;
  cin >> N;
  cin >> u >> s >> e >> w >> n >> d;
  Dice dice1(u, s, e, w, n ,d);

  bool is_same = false;
  for (int i = 1; i < N; ++i)
  {
    cin >> u >> s >> e >> w >> n >> d;
    Dice dice(u, s, e, w, n ,d);
    vector<Dice> v;
    v = dice.make_dice();

    if (solve(dice1, v))
    {
      is_same = true;
      break;
    }
    else
    {
      continue;
    }
  }

  if (is_same)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }

  return 0;
}
