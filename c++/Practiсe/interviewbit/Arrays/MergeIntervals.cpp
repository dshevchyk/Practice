//
//  MergeIntervals.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/19/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MergeIntervals.hpp"
using std::vector;
vector<Interval> MergeIntervals::Solution::insert(vector<Interval> &A, Interval newInterval) {
    auto comp = [](Interval i1, Interval i2) -> bool {
        return (i1.start < i2.start);
    };
    A.push_back(newInterval);
    sort(A.begin(), A.end(), comp);
    vector<Interval> res;
    auto n=A.size();
    res.reserve(n);
    res.push_back(A.front());
    for (auto it = A.begin() + 1; it != A.end(); ++it) {
        if (it->start <= res[res.size()-1].end) {
            res[res.size()-1].end = std::max(res[res.size()-1].end,it->end);
        } else {
            res.push_back(*it);
        }
    }
    return res;
}
