#include <iostream>

using namespace std;
const int MAX=5;
int main()
{
    int var[MAX]={1,2,3,4,5};
    int *ptr;

    ptr=var;
    for (int i=0;i<MAX;i++)
    {
        cout <<"address of var["<<i<<"]=" ;
        cout << *ptr <<endl;
        cout << ptr <<endl;
        ptr++;
    }
    return 0;
}