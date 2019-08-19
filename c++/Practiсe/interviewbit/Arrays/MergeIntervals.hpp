//
//  MergeIntervals.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/19/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef MergeIntervals_hpp
#define MergeIntervals_hpp

#include <vector>
#include "../../common/Interval.h"

namespace MergeIntervals {
    
    using std::vector;
    
    class Solution{
    public:
        vector<Interval> insert(vector<Interval> &A, Interval newInterval);
    };
}

#endif /* MergeIntervals_hpp */
