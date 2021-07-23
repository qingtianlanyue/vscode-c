#include <iostream>
using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len);

private:
    double length;
};
Line::Line(double len)
{
    cout << "构造函数创建" << len << endl;
    length =len;
}
double Line::getLength(void)
{
    return length;
}
void Line::setLength(double len)
{
    length=len;
}
int main()
{
    Line line(10.0);
    cout << "获取初始化值" << line.getLength()<<endl;
    line.setLength(100.0);
    cout << line.getLength() <<endl;
    return 0;
}