//
//  ClimbingStairs.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ClimbingStairs.hpp"

int ClimbingStairs::Solution::climbStairs(int N) {
    if (N < 3) {
        return N;
    }
    int res_minus_2 = 1;
    int res_minus_1 = 2;
    for (int i = 2; i < N; ++i) {
        const int res = res_minus_2 + res_minus_1;
        res_minus_2 = res_minus_1;
        res_minus_1 = res;
    }
    return res_minus_1;
}
