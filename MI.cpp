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
    return node;
}
