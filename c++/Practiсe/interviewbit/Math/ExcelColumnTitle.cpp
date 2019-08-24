//
//  ExcelColumnTitle.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/24/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ExcelColumnTitle.hpp"
using std::string;
string ExcelColumnTitle::Solution::convertToTitle(int A) {
    string ans = "";
    const int count = 26;
    while (A) {
        char currentLetter = 'A' + (A-1) % count;
        ans = currentLetter + ans;
        A = (A - 1) / count;
    }
    return ans;
}
