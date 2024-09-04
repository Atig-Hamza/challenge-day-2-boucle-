#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("La longueur doit être un entier positif.\n");
        return 1;
    }

    char password[length + 1];
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }
    password[length] = '\0'; 
    printf("Mot de passe généré : %s\n", password);

    return 0;
}
