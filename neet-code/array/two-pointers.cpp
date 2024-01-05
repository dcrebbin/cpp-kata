#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(vector<int> &array)
{

    array.
    int left = 0, right = array.size()-1;
    while (left < right)
    {
        int leftValue = array[left];
        int rightValue = array[right];

        if (leftValue != rightValue)
        {
            cout << leftValue << "right: " << rightValue << endl;
            cout << left << "right: " << right << endl;
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{

    vector<int> array = {1, 2, 7, 8, 2, 1};
    cout << "Is Palindrome: " << isPalindrome(array) << endl;
}