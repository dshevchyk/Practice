//
//  MAXSPPROD.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MAXSPPROD.hpp"

#include <stack>

int MAXSPPROD::Solution::maxSpecialProduct(vector<int> &A) {
    int n = A.size();
    vector<int> leftSpecialValue(n,0);
    vector<int> rightSpecialValue(n,0);
    std::stack<int> stack;
    stack.push(0);
    leftSpecialValue[0] = 0;
    for (int i = 1;i < n; i++) {
        while (!stack.empty()) {
            if (A[stack.top()]>A[i]) {
                break;
            }
            stack.pop();
        }
        leftSpecialValue[i] = stack.empty() ? 0 : stack.top();
        stack.push(i);
    }
    stack = std::stack<int>();
    stack.push(n - 1);
    rightSpecialValue[n - 1]=0;
    for(int i = n - 2;i >= 0; i--) {
        while (!stack.empty()) {
            if (A[stack.top()] > A[i]) {
                break;
            }
            stack.pop();
        }
        rightSpecialValue[i] = stack.empty() ? 0: stack.top();
        stack.push(i);
    }
    long long mx = -1;
    for (int i = 0; i < n; i++) {
        mx = std::max(mx, leftSpecialValue[i] * 1LL * rightSpecialValue[i]);
    }
    return mx % 1000000007;
}
