#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 60; //00111100
    unsigned int b = 13; //00001101
    short int d = -10;   //11110110
    short int c = 0;

    c = a & b;  //00001100
    cout << "按位与结果" << c << endl; //12

    c = a | b;  //00111101
    cout << "按位或值" << c << endl; //61

    c = a ^ b;  //00110001
    cout << "按位异或" << c << endl; //49

    c = ~a;  //11000011  => 11000010 =>10111101   只有按位取反返回的是补码形式
    cout << "按位取反" << c << endl; //-61

    c = ~d; //00001001
    cout << "有符号数按位取反" << c << endl; //9

    c = a << 2;//11110000
    cout << "按位左移" << c << endl; //240

    c = a >> 2;//00001111
    cout << "按位右移" << c << endl; //15

    c = d << 14; 
    cout << "有符号数按位左移" << c << endl; //短整型是16位，符号位不移动，可移动数不能超过15位

    return 0;
}