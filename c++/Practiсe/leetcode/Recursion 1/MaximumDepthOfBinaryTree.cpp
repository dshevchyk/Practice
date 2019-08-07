//
//  MaximumDepthOfBinaryTree.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MaximumDepthOfBinaryTree.hpp"

#include "../../common/TreeNode.h"
#include <algorithm>

int MaximumDepthOfBinaryTree::Solution::maxDepth(TreeNode *root) {
    if (!root) {
        return 0;
    }
    int l = 1 + maxDepth(root->left);
    int r = 1 + maxDepth(root->right);
    return std::max(l, r);
}
