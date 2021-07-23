#include <iostream>
using namespace std;

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 300;

    ptr=&var;
    pptr=&ptr;

    cout << "var值为：" <<var<<endl;
    cout << "*ptr值为：" <<*ptr <<endl;
    cout <<"**pptr值为："<<**pptr<<endl;

    return 0;
}