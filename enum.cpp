#include <iostream>
using namespace std;

int main()
{
	enum color {red,green=10,blue} c;
	c=blue;
	cout <<"蓝色为：" << c << endl;
	c=green;
	cout << "绿色为：" <<  c << endl;
	c=red;
	cout << "红色为：" << c << endl;
	return 0;
}
