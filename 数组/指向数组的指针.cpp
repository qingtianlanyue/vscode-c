#include <iostream>
using namespace std;

int main()
{
    double *p;
    double runoobArray[50]={1,2,3,4,5};
    p = runoobArray; //runoobAarray 是一个指向 &runoobAarray[0] 的指针，即数组 runoobAarray 的第一个元素的地址
    cout << p << endl; 
    cout << "第一个元素：" << *p <<endl;
    cout << "第二个元素：" <<*(p+1) <<endl;
    return 0;
}