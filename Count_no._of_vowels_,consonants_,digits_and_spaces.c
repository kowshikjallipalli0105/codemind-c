#include<stdio.h>
int main()
{
    char s[999];
    int l=0,m=0,n=0,o=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
         if(s[i]== 'a'|| s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
         l++;
         else if(s[i]==' ')
         m++;
         else if(s[i]>=48 && s[i]<=57 ) 
        n++;
        else
        o++;

    }
    printf("Vowels: %d
",l);
    printf("Consonants: %d
",o);
    printf("Digits: %d
",n);
    printf("White spaces: %d
",m);
}