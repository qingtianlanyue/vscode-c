#include <iostream>
using namespace std;

int main()
{
    int a=100;
    int b=200;

    auto f=[](int x,int y){return x+y;};
    int result=f(a,b);
    cout << result << endl;

    auto f1=[](int x,int y)-> int { int z=x+y;return z+x;};
    result=f1(a,b);
    cout << result << endl;

    auto f2=[a](int x){return x+a;};
    result=f2(a);
    cout << result << endl;
    return 0;

}