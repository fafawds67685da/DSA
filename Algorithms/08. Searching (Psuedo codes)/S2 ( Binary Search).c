void bin(int *arr, int n, int k)
    {
        int z =0;
        int lb = 0,ub =n-1;
        while(lb<=ub)
        {
            int mid = (ub+lb)/2;
            if(arr[mid]==k)
            {
                z+=1;
                break;
            }
            else if(arr[mid]<k)
            {
                lb=mid+1;
            }
            else
            {
                ub=mid-1;
            }
        }
        if(z==1)
        {
            cout<<"\t Found it \n";
        }
        else
        {
            cout<<"Not found yet \n";
        }
    }