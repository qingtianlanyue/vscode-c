#include <iostream>
using namespace std;

//不建议在程序中使用
int main()
{
    int a = 10;
LOOP:
    do
    {
        if (a == 15)
        {
            a += 1;
            goto LOOP;
        }
        cout << "a的值" << a << endl;
        a += 1;
    } while (a < 20);
    return 0;
}