//
//  PalindromeInteger.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/5/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "PalindromeInteger.hpp"
#include <string>

using std::string;


int PalindromeInteger::Solution::isPalindrome(int A) {
    string AStr = std::to_string(A);
    string AStrReverced = AStr;
    std::reverse(AStrReverced.begin(), AStrReverced.end());
    return AStr == AStrReverced;
//    if(A < 0)
//        return false;
//    int divs = 1;
//    int num = A;
//    while(A >= 10) {
//        A /= 10;
//        divs *= 10;
//    }
//    A = num;
//    while(A) {
//        if(A / divs != A % 10)
//            return false;
//        A = (A % divs) / 10;
//        divs /= 100;
//    }
//    return true;
}
