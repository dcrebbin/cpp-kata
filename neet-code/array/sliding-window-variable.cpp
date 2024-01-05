#include <iostream>
#include <vector>

using namespace std;

int longestSubArray(vector<int> &nums, int &length)
{
    int l = 0;
    for (int r = 0; r < nums.size(); r++)
    {
        if (nums[l] != nums[r])
        {
            l = r;
        }
        length = max(length, r - l + 1);
    }
}

int shortestSubArray(vector<int> &nums, int target)
{
    int l = 0, total = 0;
    int length = 0;
    for (int r = 0; r < nums.size(); r++)
    {
        total += nums[r];
        while (total > target)
        {
            length = min(r - l + 1, length);
            total -= nums[l];
            l += 1;
        }
    }
    return length;
}

int main()
{
    vector<int> nums = {4, 2, 2, 3, 3, 3};
    int length = 0;
    longestSubArray(nums, length);
    cout << "The longest length is: " << length;

    cout << "The shortest length is: " <<  shortestSubArray(nums, 2);
    return 0;
}