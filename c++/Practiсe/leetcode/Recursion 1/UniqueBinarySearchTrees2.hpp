//
//  UniqueBinarySearchTrees2.hpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/12/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef UniqueBinarySearchTrees2_hpp
#define UniqueBinarySearchTrees2_hpp
#include <vector>
#include "../../common/TreeNode.h"

namespace UniqueBinarySearchTrees2 {
    using std::vector;
    class Solution {
    public:
        vector<TreeNode*> generateTrees(int n);
        
    private:
        void helper(TreeNode* root, TreeNode* leaf, int n, vector<TreeNode*>& res, int currentVal);
        std::pair<TreeNode*, TreeNode*> deepCopy(TreeNode* root, TreeNode* leaf);
        void deepCopyInternal(TreeNode *&newRoot, TreeNode *root, TreeNode *&newLeaf, TreeNode *leaf);
    };
    
    class Solution2 {
    public:
        vector<TreeNode*> generateTrees(int n);
        
    private:
        vector <TreeNode*> helper(int start, int end);
    };
}
#endif /* UniqueBinarySearchTrees2_hpp */
