#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

int medianOfThree(int arr[], int low, int high)
{
    int mid = low + (high - low) / 2;

    // Ensuring that arr[low] <= arr[mid] <= arr[high]
    if (arr[mid] < arr[low])
        swap(arr[mid], arr[low]);
    if (arr[high] < arr[low])
        swap(arr[high], arr[low]);
    if (arr[high] < arr[mid])
        swap(arr[high], arr[mid]);

    // Swap the median with the last element
    swap(arr[mid], arr[high]);

    // Return the pivot
    return arr[high];
}

int partition(int arr[], int low, int high)
{
    int pivot = medianOfThree(arr, low, high);
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            if (arr[i] != arr[j]) // unecessary 
            {
                cout << "Swapping " << arr[i] << " with: " << arr[j] << endl;
                swap(arr[i], arr[j]);
            }
        }
    }

    if (arr[i + 1] != arr[high]) // unecessary 
    {
        cout << "Swapping " << arr[i + 1] << " with: " << arr[high] << endl;
        swap(arr[i + 1], arr[high]);
    }
    i++;
    return i;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotPoint = partition(arr, low, high);

        quickSort(arr, low, pivotPoint - 1);
        quickSort(arr, pivotPoint + 1, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}