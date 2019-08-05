//
//  main.cpp
//  Practise
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include <iostream>

#include "leetcode/Recursion 1/PascalsTriangle2.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;


std::function<int(int, int)> func_multiply = [](int a, int b) -> int { return a * b; };

int main(int argc, char *argv[])
{
    PascalsTriangle2::Solution s;
    s.getRow(3);
    return 0;
}
