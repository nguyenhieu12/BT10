#include <iostream>

using namespace std;

struct Tamgiac
{
    double a, b, c;
    int *d = new int[10];

    Tamgiac() {};
    Tamgiac(double _a, double _b, double _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }
};

int main()
{
    Tamgiac x(3 , 4, 5);
    Tamgiac y = x;
    cout << x.a << x.b << x.c << x.d << " " << endl;
    cout << y.a << y.b << y.c << y.d << " ";

    return 0;
}

