#include <stdio.h>

int main(){
    int x, y, z;
    printf("enter un number: ");
    scanf("%d", &x);
    
    for( y = 10 ; y >= 0 ; y-- ){
        z = x * y;
        printf(" %d x %d = %d \n", x, y, z);
    }
}