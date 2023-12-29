#include <iostream>
#include <chrono>
using namespace std;

void linearSearch(int arr[], int size, int needle)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == needle)
        {
            cout << "The needle found is: " << needle << endl;
            return;
        }
    }
    cout << "The needle was not found" << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 7, 9, 11, 34, 55, 66};
    int needle = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    linearSearch(arr, size, needle);
}
