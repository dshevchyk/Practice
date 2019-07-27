//
//  MaxSubArray.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef MaxSubArray_hpp
#define MaxSubArray_hpp

#include "../../common/speedup.h"
#include <vector>

namespace MaxSubArray {
    
    using std::vector;
    
    class Solution {
    public:
        int maxSubArray(const vector<int> &A);
    };
}
    
#endif /* MaxSubArray_hpp */
