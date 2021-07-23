#include <iostream>
using namespace std;
const int MAX=3;

int main()
{
    const char *names[MAX]={
        "zhangsan",
        "lisi",
        "wangwu"
    };

    for (int i=0;i<MAX;i++)
    {
        cout << "value of name["<<i <<"]=";
        cout <<names[i]<<endl;
        
    }
    return 0;
}