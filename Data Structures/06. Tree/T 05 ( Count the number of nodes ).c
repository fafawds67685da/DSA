void count(tree *root,int *c)
{
    if(root!=NULL)
    {
        count(root->left,c);
        *c+=1;
        count(root->right,c);
    }
}


        case 5:
            count(root,&z);
            printf("\t Total number nodes in the tree is : %d \n",z);
            break;
