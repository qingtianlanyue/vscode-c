#include <iostream>
using namespace std;

int main()
{
    short s;
    int i;
    long l;
    float f;
    double d;

    s = 10;
    i = 1000;
    l = 100000;
    f = 34.1423;
    d = 3003.143;

    cout<< sizeof(s) << "   short  s :" << s << endl;
    cout << sizeof(i) << "   int    i :" << i << endl;
    cout << sizeof(l) << "   long   l :" << l << endl;
    cout << sizeof(f) << "   float  f :" << f << endl;
    cout << sizeof(d) << "   double d :" << d << endl;

    return 0;
}