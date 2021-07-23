#include <iostream>

using namespace std;

int main()
{
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time(&rawtime);
    info=localtime(&rawtime);
    strftime(buffer,80,"%Y%m%d %H:%M:%S",info);
    printf("格式化日期和时间：%s\n",buffer);
    return 0;
}