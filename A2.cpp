#include <iostream>

using namespace std;

struct Test
{

};

void diachi(Test a)
{
    cout << &a;
}

void printDiaChi(Test &a)
{
    cout << &a;
}

int main()
{
    Test a;
    diachi(a);
    cout << endl;
    printDiaChi(a);

    return 0;
}

