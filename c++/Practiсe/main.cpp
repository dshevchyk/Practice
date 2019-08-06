//
//  main.cpp
//  Practise
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include <iostream>

#include "leetcode/Recursion 1/FibonacciNumber.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;


std::function<int(int, int)> func_multiply = [](int a, int b) -> int { return a * b; };

int main(int argc, char *argv[])
{
    FibonacciNumber::Solution s;
    int res = s.fib(2);
    return 0;
}
