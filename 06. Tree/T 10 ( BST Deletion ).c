bst* delete(bst* root, int val)
{
    if (root == NULL)
        return root;

    if (val < root->val) // Value lies in the left subtree
        root->left = delete(root->left, val);

    else if (val > root->val) // Value lies in the right subtree
        root->right = delete(root->right, val);

    else // Node to be deleted is found
    {
        if (root->left == NULL && root->right == NULL) // Case 1: No children
        {
            free(root);
            return NULL;
        }

        else if (root->left == NULL) // Case 2: Only right child
        {
            bst* temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL) // Case 3: Only left child
        {
            bst* temp = root->left;
            free(root);
            return temp;
        }

        // Case 4: Two children
        bst* temp = min(root->right); // Find the inorder successor
        root->val = temp->val; // Replace current node's value with successor's value
        root->right = delete(root->right, temp->val); // Delete the successor
    }
    return root;
}

// Function to find the minimum value in a BST
bst* min(bst* root)
{
    if (root == NULL)
        return root;

    if (root->left == NULL)
        return root;

    return min(root->left);
}
