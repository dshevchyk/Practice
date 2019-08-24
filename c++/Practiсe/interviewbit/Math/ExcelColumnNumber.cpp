//
//  ExcelColumnNumber.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/24/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ExcelColumnNumber.hpp"
int ExcelColumnNumber::Solution::titleToNumber(string A) {
    int ans = 0;
    int diff = 'A' - 1;
    for (int i = 0; i < A.size(); ++i) {
        ans = ans * 26 + (A[i] - diff);
    }
    return ans;
}
