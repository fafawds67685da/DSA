void count_leaf(tree *root,int *c)
{
        if(root->right==NULL && root->left==NULL)
    {
         *c+=1;
         return;
    }
    if(root!=NULL)

       {

        count_leaf(root->left,c);

        count_leaf(root->right,c);
       }

}
