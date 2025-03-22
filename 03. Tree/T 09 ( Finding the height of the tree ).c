int height(tree *root)
{
        if(root==NULL)
       {
           return 0 ;
       }
    else

       {

        int l =height(root->left);
        int r =height(root->right);
        return 1 + (l>r?l:r) ;
       }


}

            z = height(root);
            printf("\tHeight of the tree is : %d \n",z-1);
            z=0;
