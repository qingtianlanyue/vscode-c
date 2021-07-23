#include <iostream>
using namespace std;

class Box
{
    public:
    double length;
    double breadth;
    double height;

    double get(void);
    void set(double len,double brea,double hei);

};

double Box::get(void)
{
    return length*breadth*height;
}
void Box::set(double len, double brea, double hei)
{
    length=len;
    breadth=brea;
    height=hei;
}

int main()
{
    Box Box1;
    Box Box2;
    double volume=0.0;

    Box1.breadth=6;
    Box1.length=10;
    Box1.height=11;

    volume=Box1.length*Box1.breadth*Box1.height;
    cout << volume <<endl;

    Box2.set(11,2,20);
    volume=Box2.get();
    cout << volume<<endl;

    
}