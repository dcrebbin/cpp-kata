#include <iostream>
#include <chrono>
#include <stack>
using namespace std;

void binarySearch(int arr[], int size, int needle)
{
    int low = 0;
    int high = size;
    stack<int> st;
    strcmp
    do  
    {
        int medium = floor(low + (high - low) / 2);
        int value = arr[medium];

        if (value == needle)
        {
            cout << "The needle found was: " << needle << endl;
            return;
        }
        else if (value > needle)
        {
            high = medium;
        }
        else
        {
            low = medium + 1;
        }

    } while (low < high);
    cout << "The needle was not found" << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 7, 9, 11, 34, 55, 66};
    int needle = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr, size, needle);
}