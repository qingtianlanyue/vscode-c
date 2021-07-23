#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    double d;
    int &r = i;
    double &s = d;
    cout << "value of i:" << i << endl;
    cout << "value of i reference:" << r << endl;

    d = 11.2;
    cout << "valueof d:" << d << endl;
    cout << "value of d reference:" << s << endl;
    return 0;
}