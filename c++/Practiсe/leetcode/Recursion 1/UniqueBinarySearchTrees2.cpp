//
//  UniqueBinarySearchTrees2.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/12/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "UniqueBinarySearchTrees2.hpp"
using std::vector;
vector<TreeNode*> UniqueBinarySearchTrees2::Solution::generateTrees(int n) {
    if (n < 1) return vector<TreeNode*>();
    vector<TreeNode*> res;
    TreeNode* a = new TreeNode(1);
    this->helper(a, a, n-1, res, 1);
    return res;
}

void UniqueBinarySearchTrees2::Solution::helper(TreeNode* root, TreeNode* leaf, int n, vector<TreeNode*>& res, int currentVal) {
    if (n == 0) {
        res.push_back(root);
        return ;
    }
    auto p1 = deepCopy(root, leaf);
    p1.second->right = new TreeNode(currentVal + 1);
    this->helper(p1.first, p1.second->right, n-1, res, currentVal + 1);

    auto p = deepCopy(root, leaf);
    p.second->left = new TreeNode(currentVal + 1);
    this->helper(p.first, p.second->left, n-1, res, currentVal + 1);
    
    if (n > 1) {
        
        auto p2 = deepCopy(root, leaf);
        p2.second->left = new TreeNode(currentVal + 1);
        p2.second->right = new TreeNode(currentVal + 2);
        this->helper(p2.first, p2.second->left, n-2, res, currentVal + 2);
        if (n-2 != 0) {
            this->helper(p2.first, p2.second->right, n-2, res, currentVal + 2);
        }
    }
}

std::pair<TreeNode*, TreeNode*> UniqueBinarySearchTrees2::Solution::deepCopy(TreeNode* root, TreeNode* leaf) {
    TreeNode *newRoot = nullptr;
    TreeNode *newLeaf = nullptr;
    deepCopyInternal(newRoot, root, newLeaf, leaf);
    return std::make_pair(newRoot, newLeaf);
}

void UniqueBinarySearchTrees2::Solution::deepCopyInternal(TreeNode *&newRoot, TreeNode *root, TreeNode *&newLeaf, TreeNode *leaf) {
    if (!root) {
        return;
    }
    newRoot = new TreeNode(root->val);
    if (root == leaf) {
        newLeaf = newRoot;
    }
    deepCopyInternal(newRoot->left, root->left, newLeaf, leaf);
    deepCopyInternal(newRoot->right, root->right, newLeaf, leaf);
}

vector<TreeNode*> UniqueBinarySearchTrees2::Solution2::generateTrees(int n) {
    if (n==0) return {};
    return helper(1,n);
}

vector <TreeNode*> UniqueBinarySearchTrees2::Solution2::helper(int start, int end){
    if (start>end) return {nullptr};
    vector <TreeNode* > ans;
    for (int i=start; i <= end; ++i)
    {
        auto leftSubTree = helper(start, i-1);
        auto rightSubTree = helper(i+1,end);
        for (auto a:leftSubTree){
            for (auto b:rightSubTree){
                TreeNode *Node = new TreeNode(i);
                Node->left= a;
                Node->right= b;
                ans.push_back(Node);
            }
        }
    }
    return ans;
}
