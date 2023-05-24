
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,arr[a];
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    for (int j=0; j<b; j++)
    {
        int ft=arr[0],tmp;
        arr[0]=arr[a-1];
        for (i=1; i<a; i++)
        {
            tmp=arr[i];
            arr[i]=ft;
            ft=tmp;
        }
    }
    for (i=0; i<a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
