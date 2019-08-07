//
//  PascalTriangle.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/8/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "PascalTriangle.hpp"

std::vector<std::vector<int> > PascalTriangle::Solution::solve(int A) {
    vector<vector<int> > res(A);
    for (int i = 0; i < A; ++i) {
        res[i] = vector<int>(i+1, 1);
        for (int j = 1; j < i; ++j) {
            res[i][j] = res[i-1][j] + res[i-1][j-1];
        }
    }
    return res;
}
