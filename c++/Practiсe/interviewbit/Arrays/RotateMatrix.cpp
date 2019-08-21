//
//  RotateMatrix.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/19/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "RotateMatrix.hpp"

void RotateMatrix::Solution::rotate(vector<vector<int> > &A) {
    if (A.empty()) {
        return;
    }
    auto start = 0;
    auto end = A.size() - 1;
    
    while (start < end) {
        int i = 0;
        while ((i + start) < end) {
            std::swap(A[start][start+i], A[end-i][start]);
            std::swap(A[end-i][start], A[end][end-i]);
            std::swap(A[end][end-i], A[start+i][end]);
            i++;
        }
        start++;
        end--;
    }
}
