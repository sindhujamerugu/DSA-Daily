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
class Solution {
public:
    ListNode* getMid(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head->next;
        while (f!=nullptr && f->next!=nullptr) {
            s=s->next;
            f=f->next->next;
        }
        ListNode* m=s->next;
        s->next=nullptr;
        return m;
    }
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if (list1 != nullptr) tail->next = list1;
        if (list2 != nullptr) tail->next = list2;
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* m = getMid(head);
        ListNode* l = sortList(head);
        ListNode* r = sortList(m);
        return merge(l,r);
    }
};