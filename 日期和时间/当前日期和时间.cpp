#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now=time(NULL);

    char *dt = ctime(&now);

    cout <<"本地时间："<< dt <<endl;

    struct tm * gmtm=gmtime(&now);
    dt=asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;

    return 0;
}