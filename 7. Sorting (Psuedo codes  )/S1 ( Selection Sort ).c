void selection(char *p,int l)
{
    for(int i=0;i<l-1;i++)
    {
        int y=i;
        for(int j=i+1;j<l;j++)
        {
            if(p[j]<p[y])
            {
                y=j;
            }
        }
        char x=p[i];
        p[i]=p[y];
        p[y]=x;
    }
}
