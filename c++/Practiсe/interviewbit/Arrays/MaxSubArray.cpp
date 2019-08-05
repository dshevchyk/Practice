//
//  MaxSubArray.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MaxSubArray.hpp"

using std::numeric_limits;

int MaxSubArray::Solution::maxSubArray(const vector<int> &A) {
    
    int sum = 0;
    int maxSum = numeric_limits<int>::min();
    for (auto it = A.begin(); it != A.end(); ++it) {
        sum += *it;
        if (maxSum < sum) {
            maxSum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxSum;
}
