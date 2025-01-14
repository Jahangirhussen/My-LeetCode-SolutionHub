#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* result = new ListNode(0), *current = result;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            int sum = carry;
            if (l1)
            {
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum = sum + l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return result->next;
    }
};

// Helper function to print the linked list
void printList(ListNode* node)
{
    while (node)
    {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& nums)
{
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    for (int i = 1; i < nums.size(); ++i)
    {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    return head;
}

int main()
{
    Solution solution;

    // Test case 1: l1 = [2, 4, 3], l2 = [5, 6, 4]
    ListNode* l1 = createList({2, 4, 3});
    ListNode* l2 = createList({5, 6, 4});

    ListNode* result = solution.addTwoNumbers(l1, l2);
    printList(result);  // Expected output: 7 0 8

    // Test case 2: l1 = [0], l2 = [0]
    l1 = createList({0});
    l2 = createList({0});

    result = solution.addTwoNumbers(l1, l2);
    printList(result);  // Expected output: 0

    // Test case 3: l1 = [9, 9, 9, 9, 9, 9, 9], l2 = [9, 9, 9, 9]
    l1 = createList({9, 9, 9, 9, 9, 9, 9});
    l2 = createList({9, 9, 9, 9});

    result = solution.addTwoNumbers(l1, l2);
    printList(result);  // Expected output: 8 9 9 9 0 0 0 1

    return 0;
}

