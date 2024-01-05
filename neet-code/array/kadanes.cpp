#include <iostream>
#include <vector>
using namespace std;

int bruteForce(int &largestSum, vector<int> &array)
{
    int currentSum = 0;
    for (int i = 0; i < array.size(); i++)
    {
        currentSum = 0;
        for (int j = i; j < array.size(); j++)
        {
            currentSum += array[j];
            largestSum = max(largestSum, currentSum);
        }
    }
}

void kadanes(int &largestSum, vector<int> &array)
{

    int currentSum = 0;
    for (auto &i : array)
    {
        currentSum = max(currentSum, 0);
        currentSum += i;
        largestSum = max(largestSum, currentSum);
    }
}

void slidingWindow(int &largestSum, vector<int> &array)
{

    int currentSum = 0;
    int maxL = 0, maxR = 0;
    int l = 0;

    for (int r = 0; r < array.size(); r++)
    {
        if (currentSum < 0)
        {
            currentSum = 0;
            l = r;
        }
        currentSum += array[r];

        if (currentSum > largestSum)
        {
            largestSum = currentSum;
            maxL = l;
            maxR = r;
        }
    }
}

int main()
{

    vector<int> array = {4, -1, 2, -7, 3, -4};
    int largestSum = array[0];
    slidingWindow(largestSum, array);
    cout << largestSum << endl;
    return largestSum;
}