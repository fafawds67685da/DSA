#include<iostream>
#include <cmath>
using namespace std;
class searc
{
public:
    void input(int *arr, int n)
    {
        cout<<"\t Enter the array elements\n";
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }

    }
    void linear(int *arr, int n, int k)
    {
        int z = 0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]==k)
            {
                z+=1;
                break;
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
};
    int main()
    {
        searc ob;
        int ch = 0;
        int n;
        cout<<"\t Enter the array range \n";
        cin>>n;
        int arr[n];
        int k;
        while(ch!=6)
        {
            cout<<"\t Enter 1 to input the array \n\t Enter 2 to display the array \n\t Enter 3 for liner search \n\t Enter 4 for binary search \n\t Enter 5 for jump search \n\t Enter 6 to terminate \n";
            cin>>ch;
            switch(ch)
            {
            case 1:
                ob.input(arr,n);
                break;

            case 2:
                cout<<"\t Array elements are \n";
                for(int i =0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                break;

            case 3:
                cout<<"\t Enter the key to be searched \n";
                cin>>k;
                ob.linear(arr,n,k);
                break;

            case 4:
                cout<<"\t Enter the key to be searched \n";
                cin>>k;
                ob.bin(arr,n,k);
                break;

            case 5:
                cout<<"\t Enter the key to be searched \n";
                cin>>k;
                ob.jump(arr,n,k);
                break;


            case 6:
                break;

            default:
                cout<<"INVALID CHOICE !!";
                break;

            }
        }
        return 0;
    }
