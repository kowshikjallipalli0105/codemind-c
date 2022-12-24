#include<stdio.h>
void area(int b ,int h)
{
    int area;
    area=(b*h)*0.5;
   printf("%d",area);
}
  int main()
  {
     int b,h;
    scanf("%d%d",&b,&h);
     area(b,h);
}