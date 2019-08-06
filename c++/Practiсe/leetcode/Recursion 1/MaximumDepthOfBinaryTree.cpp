//
//  MaximumDepthOfBinaryTree.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "MaximumDepthOfBinaryTree.hpp"

#include "../../common/TreeNode.h"


void MaximumDepthOfBinaryTree::Solution::visit(TreeNode* root, int curr_depth, int& max_depth) {
    if(!root)
        return;
    int new_depth = curr_depth+1;
    if(curr_depth + 1 > max_depth) {
        max_depth = new_depth;
    }
    
    visit(root->left, new_depth, max_depth);
    visit(root->right, new_depth, max_depth);
}

int MaximumDepthOfBinaryTree::Solution::maxDepth(TreeNode *root) {
    int max_depth = 0;
    visit(root, 0, max_depth);
    return max_depth;
}
