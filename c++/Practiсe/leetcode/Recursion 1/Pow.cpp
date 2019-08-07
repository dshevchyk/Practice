//
//  Pow.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/8/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "Pow.hpp"


double Pow::Solution::myPow(double x, int n) {
    long long N = n;
    if (N < 0) {
        N = -N;
        x = 1 / x;
    }
    
    double res = 1;
    double current_prod = x;
    while (N) {
        if (N % 2 == 1) {
            res *= current_prod;
        }
        current_prod *= current_prod;
        N /= 2;
    }
    return res;
}
