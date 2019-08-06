//
//  MaximumDepthOfBinaryTree.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/6/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef MaximumDepthOfBinaryTree_hpp
#define MaximumDepthOfBinaryTree_hpp

class TreeNode;

namespace MaximumDepthOfBinaryTree {
    class Solution {
        void visit(TreeNode* root, int curr_depth, int& max_depth);
    public:
        int maxDepth(TreeNode* root);
    };
}

#endif /* MaximumDepthOfBinaryTree_hpp */
