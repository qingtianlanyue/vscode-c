#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int b = 200;

    switch (a)
    {
    case 100:
        /* code */
        cout << "这是外部switch的一部分" << endl;
        switch (b)
        {
        case 200:
            /* code */
            cout << "这是内部switch的一部分" << endl;
            break;
        }
        break;
    }
    cout << "a的值为" << a << endl;
    cout << "b的值为" << b << endl;
    return 0;
}