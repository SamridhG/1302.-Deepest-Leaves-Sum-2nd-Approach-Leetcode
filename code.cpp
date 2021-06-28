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
    int deepestLeavesSum(TreeNode* root) {
     
      queue<TreeNode *>A;
         //vector<int>r;
         int sum=0;
         A.push(root);
         int size;
         while(!A.empty())
         {
             size=A.size();
             sum=0;
             for(int i=1;i<=size;i++)
             {
                 TreeNode *top=A.front();
                 A.pop();
                 sum+=top->val;
                 if(top->left)A.push(top->left);
                 if(top->right)A.push(top->right);
             }
            // r.push_back(sum);
         }
         return sum;
    }
};
