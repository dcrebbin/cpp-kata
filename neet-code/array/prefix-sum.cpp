#include <iostream>
#include <vector>
using namespace std;

int rangeSum(int left, int right, vector<int> &prefixSums)
{
    int preRight = prefixSums[right];
    int preLeft = left > 0 ? prefixSums[left - 1] : 0;
    return preRight - preLeft;
}

int main()
{

    vector<int> nums = {2, -1, 3, -3, 4};
    vector<int> prefixSums;

    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        prefixSums.push_back(sum);
    }

    cout << rangeSum(0, 3, prefixSums);

    return 0;
}