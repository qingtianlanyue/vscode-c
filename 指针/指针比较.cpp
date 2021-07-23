#include <iostream>
using namespace std;

const int MAX=3;

int main()
{
    int var[MAX]={1,2,3};
    int *ptr;

    ptr = var;

    int i=0;
    while (ptr<=&var[MAX-1])
    {
        cout << ptr<<endl;
        cout << *ptr <<endl;

        ptr++;

    }
    return 0;
}