void bubble(char *p,int l)
{
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                char x=p[j];
                p[j]=p[j+1];
                p[j+1]=x;
            }
        }

    }
}
