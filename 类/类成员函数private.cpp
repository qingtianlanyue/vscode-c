#include <iostream>
using namespace std;

class Box
{
    double width;
    public:
        double length;
        void setWidth(double wid);
        double getWidh(void);

};

double Box::getWidh(void)
{
    return width;
}
void Box::setWidth(double wid)
{
    width = wid;
}

int main()
{
    Box Box1;

    Box1.length=10;
    cout <<Box1.length<<endl;

    Box1.setWidth(20);
    cout << Box1.getWidh()<<endl;
}