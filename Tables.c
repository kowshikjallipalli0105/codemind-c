#include <stdio.h>
int main() {
  int n,z,i;
  scanf("%d%d",&n,&z);
  for (i=1;i<=z;i++) 
  {
      if(i%2!=0)
      {
    printf("%d x %d = %d
",n,i,n*i);
  }
  }
  
}