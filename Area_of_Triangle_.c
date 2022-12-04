#include<stdio.h>
#include<math.h>
int main(){
    float s1,s2,s3;
    scanf("%f%f%f",&s1,&s2,&s3);
    float a,s;
    s=(s1+s2+s3)/2;
    a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("%.2f",a);
    
}