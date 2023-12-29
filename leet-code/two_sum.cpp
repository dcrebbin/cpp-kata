#include <iostream>
#include <vector>
using namespace std;

int twoSum(vector<int> &nums, int sum)
{
    int i = 0, j = nums.size() - 1;

    while (i < j)
    {

        if (nums[i] + nums[j] == sum)
        {
            cout << nums[i] << " + " << nums[j] << " = " << sum << endl;
            return 1;
        }
        else if (nums[i] + nums[j] < sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(10);

    int sum = 7;
    cout << twoSum(arr, sum) << endl;
}