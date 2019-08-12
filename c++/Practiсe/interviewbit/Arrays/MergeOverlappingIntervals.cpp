//
//  MergeOverlappingIntervals.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/12/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MergeOverlappingIntervals.hpp"
using std::vector;

vector<Interval> MergeOverlappingIntervals::Solution::merge(vector<Interval> &A) {
    auto comp = [](Interval i1, Interval i2) -> bool {
        return (i1.start < i2.start);
    };
    std::sort(A.begin(), A.end(), comp);
    
    auto currentLastIt = A.begin();
    for (auto it = A.begin(); it != A.end(); ++it) {
        int rangeMax = it->end;
        int rangeMin = (it++)->start;
        while (it != A.end() && it->start <= rangeMax) {
            rangeMin = std::min(it->start, rangeMin);
            rangeMax = std::max(it->end, rangeMax);
            ++it;
        }
        currentLastIt->start = rangeMin;
        (currentLastIt++)->end = rangeMax;
        --it;
    }
    return vector<Interval>(A.begin(), currentLastIt);
}
