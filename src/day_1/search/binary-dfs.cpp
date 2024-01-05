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

void dfs(BinaryNode *currentNode,vector<int>& bstValues)
{
    if (currentNode == nullptr)
    {
        return;
    }

    // cout << "Node value is: " << currentNode->value << endl;

    // if (currentNode->value == needle)
    // {
    //     cout << "Found the needle!" << endl;
    //     return;
    // }

    dfs(currentNode->left, bstValues);
    dfs(currentNode->right, bstValues);
    bstValues.push_back(currentNode->value);
    // cout << currentNode->value << endl;

}

// vector<int> dfsSearch(BinaryNode *head, int needle)
// {
//     dfs(head, needle);
// }

int main()
{
    BinaryNode *root = new BinaryNode(0);

    BinaryNode *left = new BinaryNode(1);
    root->left = left;

    BinaryNode *right = new BinaryNode(2);
    root->right = right;

    BinaryNode *bottomLeft = new BinaryNode(3);
    left->left = bottomLeft;

    vector<int> bstValues;

    dfs(root, bstValues);

    for(auto i: bstValues){
        cout << i << endl;
    }
    return 0;
}