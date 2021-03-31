#include <iostream>

using namespace std;

struct Point
{
    double x, y;

    Point() {};

    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
};

void print(Point a)
{
    cout << "(" << a.x << ", " << a.y << ")";
}
int main()
{
    Point a;
    double b, c;
    cin >> b >> c;
    a.x = b;
    a.y = c;
    print(a);

    return 0;
}
