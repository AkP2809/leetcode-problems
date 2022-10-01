#include <bits/stdc++.h>

using namespace std;

void traverse(TreeNode* root, vector<int>& res) {
      if(root == NULL)
          return;

      traverse(root->left, res);
      res.push_back(root->val);
      traverse(root->right, res);
  }

  vector<int> inorderTraversal(TreeNode* root) {
      vector<int> res;
      traverse(root, res);
      return res;
  }
