//
//  FibonacciNumber.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef FibonacciNumber_hpp
#define FibonacciNumber_hpp

#include <unordered_map>
using std::unordered_map;

namespace FibonacciNumber {
    class Solution {
        std::unordered_map<int, int> cache;
    public:
        int fib(int N);
    };
}

#endif /* FibonacciNumber_hpp */
