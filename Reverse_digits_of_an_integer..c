#include<stdio.h>
int main()
{
    int n,d,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        a=a*10 + d;
        n=n/10;
    }
    printf("%d",a);
}