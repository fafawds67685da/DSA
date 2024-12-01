count(tree* root, int z,int y)
{
    if(root==NULL)
    {
        return root;
    }
    else
    {
        if(z<root->info)
        {
            root->left=count(root->left,z,y);
        }
        else if(z>root->info)
        {
            root->right=count(root->right,z,y);
        }
        else
        {
            if(root->info==z)
            {
                    y+=1;
                    if(root->left== NULL && root->left==NULL)
                        {
                            return NULL;
                        }

                    else if(root->left== NULL || root->left==NULL)
                        {
                            if(root->left==NULL)
                                {
                                    return root->right;
                                }
                            else
                                {
                                    return root->left;
                                }
                        }

                    else
                        {
                            int a =min(root->right,z);
                            root->info =a;
                            root->right = count(root->right,a,y);
                        }
                }
        }
    }
}

min(tree *root, int a)
{
    if(root==NULL)
    {
        return a;
    }
    else
    {
        a=root->info;
        min(root->left,a);
    }
}





            printf("\t Enter the info \n");
            scanf("%d",&z);
            y=0;
            count(root,z,y);
            if(y==0)
            {
                printf("\t Node not present \n");
            }

            break;
