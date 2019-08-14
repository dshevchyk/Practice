//
//  SortAnArray.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/14/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "SortAnArray.hpp"

using std::vector;

vector<int> SortAnArray::Solution::sortArray(vector<int>& nums) {
    auto merge = [](const vector<int>& part1, const vector<int>& part2) -> vector<int> {
        vector<int> res(part1.size() + part2.size());
        auto currentIt = res.begin();
        auto currentIt1 = part1.begin();
        auto currentIt2 = part2.begin();
        while (currentIt1 != part1.end() || currentIt2 != part2.end()) {
            auto& it = currentIt1 == part1.end() ?
            currentIt2 :
            (currentIt2 == part2.end() ?
             currentIt1:
             (*currentIt1 > *currentIt2 ? currentIt2 : currentIt1));
            *(currentIt++) = *(it++);
        }
        
        return res;
    };
    std::function<vector<int> (vector<int>::iterator,vector<int>::iterator)> mergeSort;
    mergeSort = [&mergeSort, &merge] (vector<int>::iterator begin, vector<int>::iterator end) -> vector<int> {
        const auto size = std::distance(begin, end);
        if (size < 2) {
            return vector<int>(begin, end);
        }
        auto middle = begin + size / 2;
        auto part1 = mergeSort(begin, middle);
        auto part2 = mergeSort(middle, end);
        return merge(part1, part2);
    };
    return mergeSort(nums.begin(), nums.end());
}
