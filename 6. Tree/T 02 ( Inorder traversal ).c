void inorder(tree*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->info);
        inorder(root->right);
    }
}
