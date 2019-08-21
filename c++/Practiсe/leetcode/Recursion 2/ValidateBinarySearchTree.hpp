//
//  ValidateBinarySearchTree.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/21/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef ValidateBinarySearchTree_hpp
#define ValidateBinarySearchTree_hpp

class TreeNode;
namespace ValidateBinarySearchTree {
    class Solution {
    public:
        bool isValidBST(TreeNode* root);
    private:
        bool isValidBSTInternal(TreeNode* root, long long min, long long max);
    };
}
#endif /* ValidateBinarySearchTree_hpp */
