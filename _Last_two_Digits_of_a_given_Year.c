#include<stdio.h>
void year(int yr)
{
    int a;
    a=yr%100;
    printf("%.2d",a);
}
int main()
{
    int yr;
    scanf("%d",&yr);
    year(yr);
}