//
//  KthSymbolInGrammar.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/12/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "KthSymbolInGrammar.hpp"

int KthSymbolInGrammar::Solution::kthGrammar(int N, int K) {
    if (N == 0) {
        return 0;
    }
    if (K == 0) {
        return 0;
    }
    
    if (K % 2 == 1) {
        return kthGrammar(N - 1, (K + 1) / 2);
    } else {
        return kthGrammar(N - 1, K / 2) ^ 1; //xor, be different from its parent
    }
}
