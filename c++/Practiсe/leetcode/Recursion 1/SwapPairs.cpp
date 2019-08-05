//
//  SwapPairs.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "SwapPairs.hpp"

#include <vector>
#include "../../common/speedup.h"

namespace SwapPairs {
    
    ListNode* Solution::swapPairs(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* newHead = head->next;
        ListNode* next = newHead->next;
        newHead->next = head;
        next->next = swapPairs(next);
        return newHead;
        //        if(head == nullptr || head->next == nullptr) {
        //            return head;
        //        }
        //        ListNode new_node(0);
        //        ListNode* pre = &new_node;
        //        while (head && head->next){
        //            pre->next = head->next;
        //            pre = pre->next;
        //            head->next = pre->next;
        //            pre->next = head;
        //            pre = head;
        //            head = head->next;
        //        }
        //        return new_node.next;
    }
}

