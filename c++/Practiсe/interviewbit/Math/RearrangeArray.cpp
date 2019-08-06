//
//  RearrangeArray.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "RearrangeArray.hpp"

void RearrangeArray::Solution::arrange(vector<int> &A) {
    const auto n = A.size();
    for (int i = 0; i < n; ++i) {
        A[i] += (A[A[i]] % n) * n;
    }
    
    for (int i = 0; i < n; ++i) {
        A[i] /= n;
    }
}
