// solution accepted at Geeks for Geeks Practise
// use postorder traversal
void mirror(struct Node* node) {
    struct Node*temp=node;
    if(temp!=NULL)
    {
       mirror(temp->left);
       mirror(temp->right);
       // Swapping the nodes
       struct Node*t=temp->left;
       temp->left=temp->right;
       temp->right=t;
    }
}

// Leetcode solution
/*
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root!=NULL)
        {
            invertTree(root->left);
            invertTree(root->right);
            TreeNode*t=root->left;
            root->left=root->right;
            root->right=t;
        }
        return root;
    }
};


*/
