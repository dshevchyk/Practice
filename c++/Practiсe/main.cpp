//
//  main.cpp
//  Practise
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include <iostream>

#include "interviewbit/Arrays/RepeatedNumber.hpp"

int main(int argc, const char * argv[]) {
    RepeatedNumber::Solution s;
    std::vector<int> A = {3, 4, 1, 4, 1};
    s.repeatedNumber(A);
    std::cout << s.repeatedNumber(A);
    return 0;
}
