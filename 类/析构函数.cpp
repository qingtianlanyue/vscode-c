#include <iostream>
using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line();
    ~Line();

private:
    double length;
};

Line::Line()
{
    cout << "对象建立" << endl;
}
Line::~Line()
{
    cout << "对象删除" << endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line;
    line.setLength(10.1);
    cout << line.getLength() << endl;
    return 0;
}