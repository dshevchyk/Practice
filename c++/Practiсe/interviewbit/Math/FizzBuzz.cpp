//
//  FizzBuzz.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/5/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "FizzBuzz.hpp"


vector<string> FizzBuzz::Solution::fizzBuzz(int A) {
    vector<string> res(A);
    for (int i = 1; i <= A; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            res[i-1] = "FizzBuzz";
        } else if (i % 3 == 0) {
            res[i-1] = "Fizz";
        } else if (i % 5 == 0) {
            res[i-1] = "Buzz";
        } else {
            res[i-1] = std::to_string(i);
        }
    }
    return res;
}
