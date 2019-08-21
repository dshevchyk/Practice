//
//  FirstMissingInteger.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/21/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "FirstMissingInteger.hpp"
using std::vector;

int FirstMissingInteger::Solution::firstMissingPositive(vector<int> &A) {
    int n = static_cast<int>(A.size());
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] <= n) {
            int pos = A[i] - 1;
            if (A[pos] != A[i]) {
                std::swap(A[pos], A[i]);
                i--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] != i + 1) return (i + 1);
    }
    return n + 1;
}
