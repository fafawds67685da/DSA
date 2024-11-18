tree*insert(tree*root,int a)
{

        if(root==NULL)
        {
            tree*temp=(tree*)malloc(sizeof(tree));
            if(temp==NULL)
            {
                printf("\t Memory not allocated \n");
                return NULL;
            }
            temp->info=a;
            temp->right=NULL;
            temp->left=NULL;
            return temp;
        }
        else
        {
            if(a<root->info)
            {
                root->left=insert(root->left,a);
            }
            else
            {
                root->right=insert(root->right,a);
            }
            return root;

        }


}



        case 1:
            printf("\t Enter info \n");
            scanf("%d",&a);
            root=insert(root,a);
            break;
