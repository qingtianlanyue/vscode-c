#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
    int var[MAX] = {1, 2, 3};
    for (int i; i < MAX; i++)
    {
        //*var=i; //正确
        // var++; //不正确
        cout << *(var + i) << endl; //有效，且能成功编译，因为 var 未改变。
    }
    return 0;
}