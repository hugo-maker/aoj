#include <iostream>
#include <string>
using namespace std;

int main()
{
  string deck;
  string minus;
  string rest;

  int m, h;

  while (true)
  {
    cin >> deck;
    if (deck.at(0) == '-')
    {
      break;
    }

    cin >> m;
    for (int i = 0; i < m; ++i)
    {
      cin >> h;
      minus = deck.substr(0, h);
      rest = deck.substr(h);
      deck = rest + minus;
    }

    cout << deck << endl;
  }

  return 0;
}
