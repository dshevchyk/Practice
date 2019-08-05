//
//  PascalsTriangle2.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/5/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "PascalsTriangle2.hpp"
vector<int> PascalsTriangle2::Solution::getRow(int rowIndex) {
    vector<int> res(rowIndex + 1, 1);
    for (int i = 2; i <= rowIndex; ++i) {
        const auto length = i - 1;
        for (int j = length; j > 0; --j) {
            const auto index = res.size() - 1 - j;
            res[index] += res[index + 1];
        }
    }
    return res;
}
