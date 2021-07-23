#include <iostream>
#include <ctime>

int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    int year,month,day;
    const char *weekday[] = { "周日",
                              "周一",
                              "周二",
                              "周三",
                              "周四",
                              "周五",
                              "周六" };
    /* 用户输入日期 */
    printf("年: ");
    fflush(stdout);
    scanf("%d", &year);
    printf("月: ");
    fflush(stdout);
    scanf("%d", &month);
    printf("日: ");
    fflush(stdout);
    scanf("%d", &day);
    time(&rawtime);
    timeinfo=localtime(&rawtime);
    timeinfo->tm_year=year-1900;
    timeinfo->tm_mon=month-1;
    timeinfo->tm_mday=day;

    mktime(timeinfo);
    printf("那一天是：%s\n", weekday[timeinfo->tm_wday]);

    return 0;
}