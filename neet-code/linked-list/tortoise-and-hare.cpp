#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
Time complexity: O(n)
Space complexity: n/a
*/

struct Node
{
    int value;
    Node *next;
    Node()
    {
        value = 0;
        next = nullptr;
    }
};

bool list_has_cycle(Node *root)
{
    Node *slow = root;
    Node *fast = root;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

Node *retrieve_head(Node *root)
{
    Node *slow = root;
    Node *slow2 = root;
    Node *fast = root;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }

    if (!fast || !fast->next)
    {
        return nullptr;
    }

    while (slow != slow2)
    {
        slow = slow->next;
        slow2 = slow2->next;
    }
    return slow;
}

int middle_of_list(Node *root)
{
    Node *slow = root;
    Node *fast = root;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->value;
}

int main()
{

    Node *root = new Node();
    root->value = 0;
    Node *right = new Node();
    right->value = 1;
    Node *farRight = new Node();
    farRight->value = 2;

    root->next = right;
    right->next = farRight;

    cout << "Middle of list is:" << middle_of_list(root) << endl;

    cout << "Has cycle: " << list_has_cycle(root) << endl;

    farRight->next = right;
    cout << "Has cycle: " << list_has_cycle(root) << endl;

    cout << "Head root cyclical value is: " << retrieve_head(root)->value << endl;
    return 0;
}