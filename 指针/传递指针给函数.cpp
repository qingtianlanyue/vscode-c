#include <iostream>
using namespace std;

void getSeconds(unsigned long *par);

int main()
{
    unsigned long sec;

    getSeconds(&sec);
    cout << sec<<endl;
    return 0;
}

void getSeconds(unsigned long *par)
{
    *par=time(0);
    return;
}