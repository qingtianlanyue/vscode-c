#include <iostream>

using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(); //构造函数
private:
    double length;
};
Line::Line()
{
    cout << "构造函数运行" <<endl;
}
void Line::setLength(double len)
{
    length=len;
}
double Line::getLength(void)
{
    return length;
}
int main()
{
    Line line;
    line.setLength(6.1);
    cout << line.getLength() <<endl;
    return 0;
}