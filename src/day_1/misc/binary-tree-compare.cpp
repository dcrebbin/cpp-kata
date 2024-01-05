#include <iostream>

using namespace std;

struct BinaryNode
{
    int value;
    BinaryNode *left;
    BinaryNode *right;
    BinaryNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

BinaryNode *binaryTreeOne()
{
    BinaryNode *root = new BinaryNode(0);

    BinaryNode *left = new BinaryNode(1);
    root->left = left;

    BinaryNode *right = new BinaryNode(2);
    root->right = right;

    BinaryNode *bottomLeft = new BinaryNode(3);
    left->left = bottomLeft;
    return root;
}

BinaryNode *binaryTreeTwo()
{
    BinaryNode *root = new BinaryNode(0);

    BinaryNode *left = new BinaryNode(1);
    root->left = left;

    BinaryNode *right = new BinaryNode(2);
    root->right = right;

    return root;
}

bool compare(BinaryNode *one, BinaryNode *two)
{
    if (one == nullptr && two == nullptr)
    {
        return true;
    }

    if (one == nullptr || two == nullptr)
    {
        return false;
    }

    if (one->value != two->value)
    {
        return false;
    }

    return compare(one->left, two->left) && compare(one->right, two->right);
}

int main()
{
    BinaryNode *treeOne = binaryTreeOne();
    BinaryNode *treeTwo = binaryTreeOne();
    bool isTheSame = compare(treeOne, treeTwo);
    cout << "Is the same: " << isTheSame << endl;
    return 0;
}
