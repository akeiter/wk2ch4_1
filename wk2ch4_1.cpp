#include <iostream>
using namespace std;

int Max(int array[], int size);

int main()
{
    int arr[10] = { 3, 17, 8, 3, 1, 4, 10, 9, 1, 2 };
    int arrSize = 10;
    cout << Max(arr, arrSize);
}

int Max(int array[], int size)
{
    int currentMax = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > currentMax)
        {
            currentMax = array[i];
        }
    }
    return currentMax;
}
