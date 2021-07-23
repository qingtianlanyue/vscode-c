#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a=100;
    int b=200;
    auto f=[&,b](int x,int y){ a+=x;return (x+b)/y;};
    int result = f(100,200);
    cout << result << endl;
    cout << b<<endl;
}