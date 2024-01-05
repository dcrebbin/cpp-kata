#include <vector>
#include <iostream>
using namespace std;

struct Heap
{
    vector<int> data;
    int size;

    Heap()
    {
        size = 0;
    }

    void push(int x)
    {
        data.push_back(x);
        size++;
        int i = size - 1;
        while (i > 0 && data[i] < data[(i - 1) / 2])
        {
            swap(data[i], data[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    int pop()
    {
        int res = data[0];
        data[0] = data[size - 1];
        size--;
        int i = 0;
        while (2 * i + 1 < size)
        {
            int j = 2 * i + 1;
            if (j + 1 < size && data[j + 1] < data[j])
            {
                j++;
            }
            if (data[i] <= data[j])
            {
                break;
            }
            swap(data[i], data[j]);
            i = j;
        }
        return res;
    }

    int top()
    {
        return data[0];
    }

    bool empty()
    {
        return size == 0;
    }
};

int main()
{
    Heap heap;
    heap.push(3);
    heap.push(15);
    heap.push(1);
    heap.push(2);
    heap.push(4);
    heap.push(45);

    cout << heap.top() << endl;
    return 0;
}