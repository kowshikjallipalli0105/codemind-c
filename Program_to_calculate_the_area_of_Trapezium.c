#include<stdio.h>
void area(float b1,float b2, float h)
{
    printf("%.4f",(b1+b2)*h/2);
}
    int main()
{
    float h,b1,b2;
    scanf("%f%f%f",&b1,&b2,&h);
    area(b1,b2,h);
}