#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ 
  char let;
  int i,j,n;
printf("Please input a capital:");
scanf("%c",&let);
n=(int)let-64;
for (i=1;i<=n;i++)
{
  for(j=1;j<=n+1+i-1;j++)
  {
     if(j<=n-i+1)
      printf(" ");
     else if (j==n+i)
      printf("A\n");
     else if (j<=n+1)
      printf("%c",(char)(i+63+j-n));
     else 
      printf("%c",(char)(i+63-j+n+2));
     
    }
}
return 0;
}