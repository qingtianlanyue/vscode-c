#include <iostream>
using namespace std;

const int  MAX=3;

int main()
{
    char *var[MAX] = {"zhangsan","lisi","wangwu"};

    for (int i=0;i<MAX;i++)
    {
        cout << var[i] <<endl;

    }
    return 0;
}