/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* inordersucc(TreeNode* root)
    {
        TreeNode* curr = root;
        //curr=curr->right;
        while(curr&&curr->left!=NULL)
        {
            curr=curr->left;
        }
        return curr;
    }
    bool if_present(TreeNode* root,int key)
    {
        if(root==NULL)
            return false;
        else if(key<root->val)
            return if_present(root->left,key);
        else if(key>root->val)
            return if_present(root->right,key);
        else
            return true;
            
    }
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        
         if(if_present(root,key)==false)
         {
             return root;
         }
             
        else if(root->val>key)
            root->left=deleteNode(root->left,key);
        else if(key>root->val)
            root->right=deleteNode(root->right,key);
        else
        {
            if(root->left==NULL)
            {
                TreeNode* temp=root->right;
                //free(root);
                return temp;
            }
            else if(root->right==NULL)
            {
               TreeNode* temp=root->left;
                //free(root);
                return temp; 
            }
            else if(root->right==NULL && root->left==NULL)
            {
                return NULL;
            }
            else
            {
                TreeNode* temp = inordersucc(root->right);
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }
        }
        return root;
    }
};
