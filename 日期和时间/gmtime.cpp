#include <iostream>
#include <ctime>

using namespace std;

#define BST (+1)
#define CCT (+8)

int main()
{
    time_t rawtime;
    struct tm *info;
    time(&rawtime);
    info=gmtime(&rawtime);
    printf("当前的世界时钟：\n");
    // printf("%2d:%2d\n", (info->tm_hour+CCT)%12, info->tm_min);
    printf("伦敦：%2d:%02d\n", (info->tm_hour + BST) % 24, info->tm_min);
    printf("中国：%2d:%02d\n", (info->tm_hour + CCT) % 24, info->tm_min);
    return 0;
}