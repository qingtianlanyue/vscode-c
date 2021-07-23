#include <iostream>
using namespace std;

int a=100;
string char1;
int b;
int main()
{
    cout << sizeof(a) << endl; //返回变量的大小
    char1 = (a>100)?"是":"否"; //三元运算符
    cout << char1 <<endl;
    b=(a++,a+1000,a+200); //逗号运算符
    cout << b<< endl;

    return 0;
}