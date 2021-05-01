#include <cmath>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define EPS (1e-10)
#define equals(a, b) (fabs((a) - (b)) < EPS)

class Point
{
public:
  double x, y;

  Point(double x = 0, double y = 0)
    : x(x), y(y) {}

  Point operator + (Point p)
  {
    return Point(x + p.x, y + p.y);
  }
  Point operator - (Point p)
  {
    return Point(x - p.x, y - p.y);
  }
  Point operator * (double a)
  {
    return Point(a * x, a * y);
  }
  Point operator / (double a)
  {
    return Point(a / x, a / y);
  }

  double abs()
  {
    return sqrt(norm());
  }
  double norm()
  {
    return x * x + y * y;
  }

  bool operator < (const Point & p) const
  {
    return x != p.x ? x < p.x : y < p.y;
  }

  bool operator == (const Point & p) const
  {
    return fabs(x - p.x) < EPS && fabs(y - p.y) < EPS;
  }
};

typedef Point Vector;

double norm(Vector a)
{
  return a.x * a.x + a.y * a.y;
}

double abs(Vector a)
{
  return sqrt(norm(a));
}

struct Segment
{
  Point p1, p2;
};

typedef Segment Line;

class Circle
{
public:
  Point c;
  double r;
  Circle(Point c = Point(), double r = 0.0)
    : c(c), r(r) {}
};

double dot(Vector a, Vector b)
{
  return a.x * b.x + a.y * b.y;
}

double cross(Vector a, Vector b)
{
  return a.x * b.y - a.y * b.x;
}

double get_distance_lp(Line l, Point p)
{
  return abs(cross(l.p2 - l.p1, p - l.p1) / abs(l.p2 - l.p1));
}

double get_distance_sp(Segment s, Point p)
{
  if (dot(s.p2 - s.p1, p - s.p1) < 0.0)
  {
    return abs(p - s.p1);
  }
  if (dot(s.p1 - s.p2, p - s.p2) < 0.0)
  {
    return abs(p - s.p2);
  }
  return get_distance_lp(s, p);
}

int main()
{
  double W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  Point c(x, y);
  Circle circle(c, r);

  Point p1(0, 0);
  Point p2(W, 0);
  Point p3(W, H);
  Point p4(0, H);

  Segment s1, s2, s3, s4;
  s1.p1 = p1;
  s1.p2 = p2;
  s2.p1 = p2;
  s2.p2 = p3;
  s3.p1 = p3;
  s3.p2 = p4;
  s4.p1 = p4;
  s4.p2 = p1;

  if (circle.c.x > 0 && circle.c.x < p3.x && circle.c.y > 0 && circle.c.y < p3.y)
  {
    if (get_distance_sp(s1, circle.c) >= circle.r &&
        get_distance_sp(s2, circle.c) >= circle.r &&
        get_distance_sp(s3, circle.c) >= circle.r &&
        get_distance_sp(s4, circle.c) >= circle.r)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
