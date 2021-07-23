#include <iostream>
using namespace std;

class Volumn
{
private:
    double length;
    double width;
    double heigth;

public:
    Volumn(double len, double wid, double hei);
    void setLength(double len);
    void setWidth(double wid);
    void setHeigth(double hei);
    double getVol(void);
};
Volumn::Volumn(double len, double wid, double hei) : length(len), width(wid), heigth(hei)
{
    cout << "初始化" << endl;
}
void Volumn::setLength(double len)
{
    length = len;
}
void Volumn::setWidth(double wid)
{
    width = wid;
}
void Volumn::setHeigth(double hei)
{
    heigth = hei;
}
double Volumn::getVol(void)
{
    return heigth * length * width;
}
int main()
{
    Volumn volumn(10.0, 20.2, 30.3);
    cout <<"初始化"<<  volumn.getVol() << endl;
    volumn.setLength(40);
    cout << volumn.getVol()<<endl;
    return 0;
}