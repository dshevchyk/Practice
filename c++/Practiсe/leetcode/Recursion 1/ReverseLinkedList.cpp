//
//  ReverseLinkedList.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/5/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ReverseLinkedList.hpp"

ListNode* ReverseLinkedList::Solution::reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* cur = head;
    while (cur) {
        ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
