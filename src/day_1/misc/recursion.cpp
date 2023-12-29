#include <iostream>

using namespace std;

int addingNumbers(int num, int max)
{
    if (num == max)
    {
        return num;
    }
    cout << "running function call: " << num + 1 << endl;
    num = num + 1;
    addingNumbers(num, max);
}

int main()
{
    cout << "Starting recursion" << endl;
    int sum = addingNumbers(0, 10);
    cout << "Ending recursion" << endl;
    cout << "The sum is :" << sum << endl;
    return 0;
}