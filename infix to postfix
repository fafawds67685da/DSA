#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 100
int main()
{
    int y=0,x=0;
    char a[Max];
    printf("\t Enter the infix expression \n");
    fgets(a,Max,stdin);
    char c[Max],d[Max];
    int l=strlen(a)-1;

    for(int i=0;i<l;i++)
    {
        if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^'||a[i]=='('||a[i]==')')
        {
            c[y]=a[i];
            y=y+1;
            if(y>0)
            {
                if(c[y-1]==')')
                {
                    for(int i=y-1;i>=0;i--)
                    {
                        if(c[i]=='('||c[i]==')')
                        continue ;
                        d[x]=c[i];
                        x=x+1;
                    }
                    
                    y=0;
                }
                if(c[y-2]=='^'&&c[y-1]!='^')
                {
                     for(int i=y-2;i>=0;i--)
                    {
                        d[x]=c[i];
                        x=x+1;
                    }
                    c[0]=c[y-1];
                    y=1;
                }
                if((c[y-2]=='*'||c[y-2]=='/')&&(c[y-1]=='+'||c[y-1]=='-'))
                {
                    for(int i=y-2;i>=0;i--)
                    {
                        d[x]=c[i];
                        x=x+1;
                    }
                    c[0]=c[y-1];
                    y=1;
                }

                if(  (c[y-2]=='*'&&c[y-1]=='/')  || (c[y-2]=='/'&&c[y-1]=='*')  ||(c[y-2]=='+'&&c[y-1]=='-')  || (c[y-2]=='-'&&c[y-1]=='+'))
                {
                    for(int i=y-2;i>=0;i--)
                    {
                        d[x]=c[i];
                        x=x+1;
                    }
                    c[0]=c[y-1];
                    y=1;
                }
                
            }
            
        }
        else
         {
            if(a[i]==' ')
            {
                printf("\t INVALID INFIX EXPRESSION !! \n");
                exit(0);
            }

            d[x]=a[i];
            x=x+1;
        }
    }
    if(y>0)
    {
        for(int i=y-1;i>=0;i--)
        {
            d[x]=c[i];
            x=x+1;
        }
    }
    d[x]='\0';

    printf("\t %s \n",d);
    return 0;

}
