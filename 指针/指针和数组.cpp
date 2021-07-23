#include <iostream>
using namespace std;
const int MAX=3;

int main()
{
    int var [MAX]={1,2,3};
    int *ptr;

    ptr=var;
    for (int i=0;i<MAX;i++)
    {
        cout << "var["<<i<<"]的内存地址";
        cout <<ptr <<endl;

        cout << "var["<<i<<"]的值为";
        cout << *ptr <<endl;
        ptr++;
    }
    return 0;
}