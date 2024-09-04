#include <stdio.h>
 
int main(){
   int vers = 0, nbr;
 
   printf("Entrez un nombre à inverser: ");
   scanf("%d", &nbr);
 
   while (nbr != 0){
      vers = vers * 10;
      vers = vers + nbr%10;
      nbr = nbr/10;
   }
 
   printf("Le nombre en sens inverse est %d\n", vers);
   return 0;
}
