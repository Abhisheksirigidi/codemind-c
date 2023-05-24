
#include<stdio.h>
int main()
{
    int a,i,j,k,h,q;
    scanf("%d",&a);
    int b[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    if(a<=2)
    {
        printf("It is not possible");
    }
    else
    {
        for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(b[j]<b[j+1])
            {
                q=b[j];
                b[j]=b[j+1];
                b[j+1]=q;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=i;j<a;j++)
        {
            if(i!=j)
            {
                if(b[i]==b[j])
                {
                    for(k=j;k<a;k++)
                    {
                        b[k]=b[k+1];
                    }
                    a--;
                    j--;
                }
            }
        }
    }
    int w[a];
    int co=0;
    for(h=a-1;h>=0;h--)
    {
        w[co]=b[h];
        co+=1;
    }
    if(a>=3)
    {
        printf("%d",b[2]);
    }
    else
    {
         printf("It is not possible");
    }
    }
}
