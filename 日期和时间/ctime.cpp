#include <iostream>
#include <ctime>

int main()
{
    time_t curtime;
    time(&curtime);
    printf("当前时间 = %s", ctime(&curtime));
    return 0;
}