//
//  MergeOverlappingIntervals.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/12/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef MergeOverlappingIntervals_hpp
#define MergeOverlappingIntervals_hpp

#include <vector>
#include "../../common/Interval.h"

namespace MergeOverlappingIntervals {
    
    using std::vector;
    
    class Solution{
    public:
        vector<Interval> merge(vector<Interval> &A);
    };
}

#endif /* MergeOverlappingIntervals_hpp */
