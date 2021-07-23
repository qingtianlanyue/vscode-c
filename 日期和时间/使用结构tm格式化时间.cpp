#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now=time(0);

    cout << "时间戳：" <<now <<endl;

    const struct tm *ltm=localtime(&now);

    cout << "年：" << 1900 + ltm->tm_year << endl;
    cout << "月：" <<1+ltm->tm_mon <<endl;
    cout <<"日：" <<ltm->tm_mday <<endl;
    cout << "时间" << ltm->tm_hour<<":";
    cout << ltm->tm_min <<":";
    cout << ltm->tm_sec <<endl;
}