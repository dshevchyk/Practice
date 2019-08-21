//
//  HotelBookingsPossible.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/21/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "HotelBookingsPossible.hpp"
using std::vector;
bool HotelBookingsPossible::Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    std::sort(arrive.begin(), arrive.end());
    std::sort(depart.begin(), depart.end());
    int nextDepartIndex = 0;
    for (int i = 0; i < arrive.size(); ++i) {
        while(nextDepartIndex != i && depart[nextDepartIndex] <= arrive[i]) {
            nextDepartIndex++;
        }
        if (i - nextDepartIndex + 1 > K) {
            return false;
        }
    }
    return true;
}
