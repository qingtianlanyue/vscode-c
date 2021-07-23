#include <iostream>
using namespace std;

int myMax(int ,int );//函数声明

int myMax(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

int main()
{
    int a = 100;
    int b = 200;
    int c;
    c = myMax(a, b);
    cout << c << endl;
    return 0;
}