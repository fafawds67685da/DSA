void small_leaf(tree *root,int *y,int *c)
{
    if(root!=NULL)
    {

        small_leaf(root->left,y,c);
        *y  =*y + 1;
        if(*y==2)
        {
            *c=root->info;
        }
        small_leaf(root->right,y,c);
    }
}

        case 7:
            y=0;
            int z=0;
            small_leaf(root,&y,&z);
            printf("\t second smallest node in the tree is : %d \n",z);
            break;
