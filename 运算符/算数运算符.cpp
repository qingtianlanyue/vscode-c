#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line1 - c的值为" << c << endl;

    c = a - b;
    cout << "line2 - c的值为" << c << endl;

    c = a * b;
    cout << "line3 - c的值为" << c << endl;

    c = a / b;
    cout << "line4 - c的值为" << c << endl;

    c = a % b;
    cout << "line5 - c的值为" << c << endl;

    int d = 10;
    c = d++;
    cout << "line6 - c的值为" << c << "d的值为" << d << endl;

    d = 10;
    c = d--;
    cout << "line7 - c的值为" << c << "d的值为" << d << endl;

    return 0;
}