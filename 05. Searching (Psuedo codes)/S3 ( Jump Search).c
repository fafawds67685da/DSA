void jump(int *arr, int n, int k)
    {
        int z = 0;
        int prev=0;
        for(int i =1;i<n;i += sqrt(n))
        {
            if(arr[i]==k)
            {
                 z+=1;
                 break;
            }
            if(k<arr[i])
            {
                int lb = prev,ub =i;
                while(lb<ub)
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
            }

            prev = i;


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