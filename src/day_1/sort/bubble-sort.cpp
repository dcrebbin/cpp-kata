#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void bubbleSort(int arr[], int N)
{
    cout << "Bubble sorting" << endl;
    bool isSwapped;
    for (int i = 0; i < N; i++)
    {
        isSwapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}

int main()
{
    cout << "Bubble sort implementation" << endl;

    int arr[] = {1, 3, 65, 22, 5, 67, 8, 4, 3};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    cout << "size: " << arraySize << endl;
    bubbleSort(arr, arraySize);
    printArray(arr, arraySize);
}
