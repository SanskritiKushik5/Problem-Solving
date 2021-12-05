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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag = true;
	    check(p,q,&flag);
	    return flag;
    }
    void check(TreeNode* p, TreeNode* q, bool* flag)
    {
        if( !p && !q)
        {
            return;
        }
        if(!p || !q || p->val != q->val)
        {
            *flag = false;
        }
        check(p != 0 ? p->left : 0, q!=0 ? q->left: 0, flag);
        check(p != 0 ? p->right: 0, q!=0 ?  q->right: 0, flag);
        
    }
};
