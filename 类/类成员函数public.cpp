#include <iostream>
using namespace std;

class Line
{
public:
    double length;
    void setLength(double len);
    double getLength(void);
};

double Line::getLength(void)
{
    return length;
}
void Line::setLength(double len)
{
    length = len;
}
int main()
{
    Line line1;
    line1.setLength(1.1);
    cout << line1.getLength() << endl;

    line1.length = 2.2;
    cout << line1.length << endl;
    return 0;
}