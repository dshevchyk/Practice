//
//  main.cpp
//  Practise
//
//  Created by Dmytro Shevchyk on 7/27/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include <iostream>

#include "interviewbit/Arrays/SpiralOrderMatrixI.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <unordered_map>
#include <map>
#include "common/Interval.h"
#include "interviewbit/Arrays/MergeIntervals.hpp"
using namespace std;

int main(int argc, char *argv[])
{

    MergeIntervals::Solution s;
    vector<Interval> ints= {
        {1, 2},
        {6, 10}
    };
    const auto ans = s.insert(ints, {3, 4});
    return 0;
}
