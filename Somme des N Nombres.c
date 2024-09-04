#include <stdio.h>
 
int main(){
   int i, x, n;
   
   printf("enter la valeur de n: ");
   scanf("%d", &n);
   
   for( x = 0 ; x <= n ; x++  ){
       printf(" %d ",x);
       
       if ( x < n ){
           printf("+");
           
        i += x;
        
       }else if ( x == n ){
           printf("=");
           printf("%d", i);
       }
   }
}