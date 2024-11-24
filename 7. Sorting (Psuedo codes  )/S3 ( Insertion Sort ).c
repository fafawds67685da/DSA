void insertion(char *p,int l)
{
    for(int i=1;i<l;i++)
    {
        int j = i-1;
        char y = p[i];
        while(j>=0 && p[j] > y)
        {
            p[j+1]=p[j];
            j=j-1;
        }
        p[j+1]=y;
    }
}
