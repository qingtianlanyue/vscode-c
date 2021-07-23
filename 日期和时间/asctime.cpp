#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    struct tm t;
    t.tm_sec=10;
    t.tm_min=10;
    t.tm_hour=6;
    t.tm_mday=25;
    t.tm_mon=2;
    t.tm_year=121;
    t.tm_wday=5;
    puts(asctime(&t));
    return 0;
}