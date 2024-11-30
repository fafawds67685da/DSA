void com_par(tree *root,int *c)
{
           if(root==NULL)
       {
           return;
       }
    if(root->right!=NULL && root->left!=NULL)
    {
         *c=*c+2;

    }
    if(root!=NULL)

       {

        com_par(root->left,c);

        com_par(root->right,c);
       }


}
