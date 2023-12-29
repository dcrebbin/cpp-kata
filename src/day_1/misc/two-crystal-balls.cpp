#include <iostream>

using namespace std;

int twoCrystalBalls(bool breaks[], int size)
{
    int jumpAmount = floor(sqrt(size));
    int i = jumpAmount;
    for (; i < size; i += jumpAmount)
    {
        if (breaks[i])
        {
            break;
        }
    }

    for (int j = 0; j < jumpAmount && i < size; j++, i++)
    {
        if (breaks[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int idx = floor(random() * 10000);
    bool breaks[] = {};
    

    for (int i = idx; i < 10000; ++i) {
        breaks[i] = true;
    }

    int size = sizeof(breaks) / sizeof(breaks[0]);
    cout << twoCrystalBalls(breaks, size) << endl;
}