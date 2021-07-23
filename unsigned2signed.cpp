#include <iostream>
using namespace std;

int main()
{
	short int i;
	short unsigned int j;

	j = 50000; //j的二进制表示1100001101010000
	i = j;	   //i是有符号数，i=j，所以i是个负数，1100001101010000是i的补码，求原码可以算出i的值
	cout << i<< " " << j;
	return 0;
}
