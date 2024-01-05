#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
struct BinaryNode
{
    int value;
    BinaryNode *left;
    BinaryNode *right;
    BinaryNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void bfs(BinaryNode *currentNode, int needle)
{
    queue<BinaryNode *> qu;
    qu.push(currentNode);

    while (qu.size())
    {
        BinaryNode *current = qu.front();
        qu.pop();
        cout << current->value << endl;
        if (current->value == needle)
        {
            cout << "found needle";
            return;
        }

        if (current->left)
        {
            qu.push(current->left);
        }
        if (current->right)
        {
            qu.push(current->right);
        }
    }
}

void bfsSearch(BinaryNode *head, int needle)
{
    bfs(head, needle);
}

void printArray(vector<int> &path)
{
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << endl;
    }
}

int main()
{
    BinaryNode *root = new BinaryNode(0);
    BinaryNode *left = new BinaryNode(1);
    root->left = left;
    BinaryNode *right = new BinaryNode(2);
    root->right = right;
    BinaryNode *bottomLeft = new BinaryNode(3);
    left->left = bottomLeft;

    int needle = 3;
    
    bfsSearch(root, needle);
    return 0;
}