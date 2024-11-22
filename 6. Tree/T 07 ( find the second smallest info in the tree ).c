void small_leaf(tree *root,int *y,int *c)
{
    if(root!=NULL)
    {
        if(*y > root->info)
        {

            *c=*y;
            *y=root->info;

        }
        small_leaf(root->left,y,c);

        small_leaf(root->right,y,c);
    }
}

        case 7:
            y=100000;
            int z=100000;
            small_leaf(root,&y,&z);
            printf("\t second smallest node in the tree is : %d \n",z);
            break;
