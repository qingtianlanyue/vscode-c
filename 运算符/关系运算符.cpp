#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    if (a == b)
    {
        cout << "a等于b" << endl;
    }
    else
    {
        cout << "a不等于b" << endl;
    }

    if (a < b)
    {
        cout << "a小于b" << endl;
    }
    else
    {
        cout << "a不小于b" << endl;
    }
    if (a > b)
    {
        cout << "a大于b" << endl;
    }
    else
    {
        cout << "a不大于b" << endl;
    }

    a = 5;
    b = 20;
    if (a <= b)
    {
        cout << "a小于或等于b" << endl;
    }
    if (b >= a)
    {
        cout << "b大于或等于a" << endl;
    }
    return 0;
}