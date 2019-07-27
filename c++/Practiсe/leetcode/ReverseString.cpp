//
//  ReverseString.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ReverseString.hpp"

namespace ReverseString {
    using std::swap;
    
    void Solution::reverseString(vector<char>& s) {
        if (s.empty()) {
            return;
        }
        auto lastIndex = s.size() - 1;
        for (auto i = 0; i < lastIndex; ++i, lastIndex--) {
            swap(s[i], s[lastIndex]);
        }
    }
    
}
