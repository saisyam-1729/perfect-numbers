#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, n, m = 0 ;

 printf("\n Please Enter any number \n") ;
 scanf("%d", &n) ;

 for(i = 1 ; i <= n/2 ; i++)
  {
   if(n % i == 0)
     m = m + i ;
  }

 if (m == n)
    printf("\n %d is a Perfect Number", n) ;
 else
    printf("\n%d is not the Perfect Number", n) ;

return 0 ;
}
