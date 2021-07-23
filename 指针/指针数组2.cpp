#include <iostream>
using namespace std;
const int MAX=3;
int main()
{
    int var[MAX]={1,2,3};
    int *ptr[MAX];

    for (int i=0;i<MAX;i++)
    {
        ptr[i]=&var[i];
    }
    for (int i=0;i<MAX;i++)
    {
        cout <<"value of var["<<i<<"]=";
        cout <<*ptr[i]<<endl;
    }
    return 0;
}