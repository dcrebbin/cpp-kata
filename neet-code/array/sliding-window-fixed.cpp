#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool bruteForceCloseDuplicates(vector<int> &nums, int k)
{
    int size = static_cast<int>(nums.size());

    for (int l = 0; l <size; l++)
    {
        for (int r = l + 1; r < min(size, l + k); r++)
        {
            if (nums[l] == nums[r])
            {
                return true;
            }
        }
    }
    return false;
}

bool efficientCloseDuplicates(vector<int> &nums, int k)
{
    unordered_set<int> window;
    int l = 0;

    for (int r = 0; r < nums.size(); r++)
    {
        if (r - l + 1 > k)
        {
            window.erase(nums[l]);
        }

        if (window.count(nums[r] > 0))
        {
            return true;
        }

        window.insert(nums[r]);
    }
    return false;
}

int main()
{
    vector<int> array = {1, 2, 3, 2, 3, 3};
    int k = 2;

    cout << efficientCloseDuplicates(array, k) << endl;

    return 0;
}