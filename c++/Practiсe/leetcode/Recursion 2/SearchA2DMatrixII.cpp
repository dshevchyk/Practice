//
//  SearchA2DMatrixII.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/24/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "SearchA2DMatrixII.hpp"

using std::vector;
bool SearchA2DMatrixII::Solution::searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix.front().empty()) {
        return false;
    }
    int sizeI = matrix.size();
    int sizeY = matrix.front().size();
    if (target < matrix[0][0] || target > matrix[sizeI - 1][sizeY - 1]) {
        return false;
    }
    
    int i = sizeI - 1, j = 0;
    while ( i > -1 && j < sizeY){
        if (target > matrix[i][j]) {
            j++;
        }
        else if(target < matrix[i][j]) {
            i--;
        }
        else {
            return true;
        }
    }
    return false;
}
