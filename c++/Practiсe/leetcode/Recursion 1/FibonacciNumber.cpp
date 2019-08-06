//
//  FibonacciNumber.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "FibonacciNumber.hpp"

int FibonacciNumber::Solution::fib(int N) {
//    if (N < 2) {
//        return N;
//    }
//    auto it = this->cache.find(N);
//    if (it != this->cache.end()) {
//        return it->second;
//    }
//    int res = fib(N-1) + fib(N-2);
//    this->cache[N] = res;
//    return res;
    if (N < 2) {
        return N;
    }
    int f_minus_1 = 1;
    int f_minus_2 = 0;
    for (int i = 2; i <= N; ++i) {
        int f = f_minus_1 + f_minus_2;
        f_minus_2 = f_minus_1;
        f_minus_1 = f;
    }
    return f_minus_1;
    
}
