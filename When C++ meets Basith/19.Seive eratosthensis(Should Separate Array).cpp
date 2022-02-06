#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[100];
    for (int i = 2; i < 100; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i < 100; i++)
    {
        if (arr[i]!=0)
        {
            for (int j = 2; j < 100; j++)
            {
                if (arr[j] % i == 0 && j!=i)
                {
                    arr[j] = 0;
                }
            }
        }
    }
    arr[90]=0;
    for (int i = 2; i < 100; i++)
    {
        if (arr[i]!=0)
        {
            cout<<arr[i]<<endl;
        }
    }
    

    return 0;
}