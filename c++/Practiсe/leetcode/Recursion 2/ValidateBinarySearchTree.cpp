//
//  ValidateBinarySearchTree.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/21/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "ValidateBinarySearchTree.hpp"
#include "../../common/TreeNode.h"

#include <limits>

using std::numeric_limits;

bool ValidateBinarySearchTree::Solution::isValidBST(TreeNode* root) {
    return isValidBSTInternal(root, numeric_limits<long long>::min(), numeric_limits<long long>::max());
}
    
bool ValidateBinarySearchTree::Solution::isValidBSTInternal(TreeNode* root, long long min, long long max) {
    if(!root) {
        return true;
    }
    if(root->val <= min || root->val >= max) {
        return false;
    }
    return isValidBSTInternal(root->left, min, root->val) && isValidBSTInternal(root->right, root->val, max);
}
