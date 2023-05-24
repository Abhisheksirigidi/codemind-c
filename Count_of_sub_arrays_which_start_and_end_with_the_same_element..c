
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=10000)
            {
                if(i!=j)
                {
                    if(a[i]==a[j])
                    {
                        count++;
                        a[i]=10000;
                    }
                }
            }
        }
    }
    printf("%d",count+n);
}
