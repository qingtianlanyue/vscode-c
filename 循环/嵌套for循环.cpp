#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=0; i < 20; i++)
    {
        for (j=0; j < 10; j++)
        {
            cout << i << endl;
            cout << j << endl;
            cout << "--------" << endl;
        }
    }
    return 0;
}