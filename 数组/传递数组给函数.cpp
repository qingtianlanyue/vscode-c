#include <iostream>
using namespace std;

double getAverage(int arr[], int size)
{
    int i,sum=0;
    double avg;
    for (i=0;i<size;++i)
    {
        sum+=arr[i];
    }
    avg=double(sum)/size;

    return avg;
}

double getAverage(int arr[],int size);
int main()
{
    int balance[5]={2,5,6,7,8};
    double avg;
    avg=getAverage(balance,5);
    cout << avg <<endl;

    return 0;
}