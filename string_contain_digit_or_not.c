#include<stdio.h>
int main(){
    char s[1000],l=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
         l++;
    } if(l>0)
    printf("Contains %d digit",l);
    else
    printf("Doesn't contain digit");
}