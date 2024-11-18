void preorder(tree*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->info);
        preorder(root->left);

        preorder(root->right);
    }
}
