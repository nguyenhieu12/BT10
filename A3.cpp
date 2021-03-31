#include <iostream>

using namespace std;

struct Point
{
    double x, y;

    Point() {};

    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void input()
    {
        cin >> x >> y;
    }

    Point mid_point(const Point a, const Point b)
    {
         Point other;
         other.x = (a.x + b.x)/2;
         other.y = (a.y + b.y)/2;

         return other;
    }
};


int main()
{
    Point a, b;
    a.input();
    b.input();

    Point c = mid_point(a, b);
    cout << "(" << c.x << ", " << c.y << ")";

    return 0;
}

