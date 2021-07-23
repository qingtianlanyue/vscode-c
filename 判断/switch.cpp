#include <iostream>
using namespace std;

int main()
{
    char grade = 'D';

    switch (grade)
    {
    case 'A':
        cout << "very good" << endl;
        break;
    case 'B':
        cout << "good" << endl;
        break;
    case 'C':
        cout << "passed" << endl;
        break;
    case 'D':
        cout << "bad" << endl;
        break;
    default:
        cout << "无效" << endl;
    }
    cout << "你的成绩：" << grade << endl;
    return 0;
}