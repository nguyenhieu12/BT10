#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* str;

    String(const char* _str)
    {
        n = strlen(_str);
        str = new char[n];
        for(int i = 0;i < n;i++)
        {
            str[i] = _str[i];
        }
    }
    ~String()
    {
        delete str;
    }
    void print()
    {
        cout << str;
    }
    void append(const char* s)
    {
        int m = strlen(s);
        char* temp = new char[m + n];
        strcpy(temp, str);
        delete [] str;
        strcat(temp, s);
        str = temp;
    }
};

int main()
{
    String s("Hi ");
    s.append("there");
    s.print();

    return 0;
}
