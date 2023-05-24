#include<stdio.h>
int sos(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r,s=sos(n);
    while(s>9)
    {
        r=sos(s);
        s=r;
    }
    if(s==1||s==7)
    {
        printf("True");
    }
    else
    printf("False");
}
