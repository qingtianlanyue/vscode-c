#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    do
    {
        /* code */
        cout << "a的值为" << a << endl;
        a += 1;
        if (a > 15)
        {
            break;
        }
    } while (a < 20);

    return 0;
}