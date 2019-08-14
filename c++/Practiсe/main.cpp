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


int main(int argc, char *argv[])
{
    std::vector<std::vector<int>> A = {
        {133, 241, 22, 258, 187, 150, 79, 207, 196, 401, 366, 335, 198},
        {401, 55, 260, 363, 14, 318, 178, 296, 333, 296, 45, 37, 10},
        {112, 374, 79, 12, 97, 39, 310, 223, 139, 91, 171, 95, 126},
    };
    SpiralOrderMatrixI::Solution s;
    const auto ans = s.spiralOrder(A);
    for (auto i = ans.begin(); i != ans.end(); ++i)
        std::cout << *i << ' ';
    return 0;
}
