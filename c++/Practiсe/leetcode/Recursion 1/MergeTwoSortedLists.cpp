//
//  MergeTwoSortedLists.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/8/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MergeTwoSortedLists.hpp"

#include "../../common/ListNode.h"

ListNode* MergeTwoSortedLists::Solution::mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode pre(0);
    ListNode* current = &pre;
    while(l1 || l2) {
        ListNode** c = l1 && l2 ?
            (l1->val > l2->val ? &l2 : &l1) :
            (l1 ? &l1 : &l2);
        current->next = (*c);
        (*c) = (*c)->next;
        current = current->next;
    }
    return pre.next;
}
