//
//  RepeatedNumber.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "RepeatedNumber.hpp"

int RepeatedNumber::Solution::repeatedNumber(const vector<int> &A) {
    // Find the intersection point of the two runners.
    int slow = A[0];
    int fast = A[0];
    do {
        slow = A[slow];
        fast = A[A[fast]];
    } while (slow != fast);
    
    // Find the "entrance" to the cycle.
    fast = A[0];
    while (fast != slow) {
        fast = A[fast];
        slow = A[slow];
    }
    
    return slow;
}
