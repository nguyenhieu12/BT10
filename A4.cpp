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

    void input()
    {
        cin >> x >> y;
    }
};

void print(Point &a)
{
    cout << &a.x << " " << &a.y << " " << &a;
}

int main()
{
    Point a;
    a.input();

    print(a);
    return 0;
}
