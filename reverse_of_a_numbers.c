#include<stdio.h>
int main(){
    int n,old,i,a=0;
    scanf("%d",&n);
    old=n;
    while(n!=0)
    {
        i=n%10;
        a=a*10+i;
        n=n/10;
    }
    
        printf("%d",a);

}