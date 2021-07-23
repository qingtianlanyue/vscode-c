#include <iostream>
using namespace std;
const int MAX=4;
int main()
{
    char var[MAX]={'A','b','c','\0'};
    char *ptr;

    ptr=var;
    cout <<&ptr <<endl;
    return 0;

}