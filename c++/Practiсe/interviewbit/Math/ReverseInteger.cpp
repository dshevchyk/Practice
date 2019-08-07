//
//  ReverseInteger.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/8/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ReverseInteger.hpp"

#include <limits>

using std::numeric_limits;

int ReverseInteger::Solution::reverse(int A) {
    long long rev=0;
    int rem;
    
    while (A) {
        rem = A % 10;
        rev = rev * 10 + rem;
        A = A / 10;
        if (rev > numeric_limits<int>::max() || rev < numeric_limits<int>::min()) {
            return 0;
        }
    }
    return static_cast<int>(rev);
}
