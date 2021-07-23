#include <iostream>
using namespace std;
const int MAX=3;

int main()
{
    int var[MAX]={1,2,3};
    for (int i;i<MAX;i++)
    {
        cout << "value of var["<<i<<"]=";
        cout << var[i] <<endl;
    }
    return 0;
}