/*Challenge 12 : Afficher les Éléments Paire
Écrivez un programme C qui affiche uniquement les éléments pairs d'un tableau d'entiers.
Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements dans le tableau : ");
    scanf("%d", &n);  
    
    int tableau[n];  
    printf("Entrez les elements du tableau :\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);  
    }

    printf("Les elements pairs sont :\n");
    for(int i = 0; i < n; i++) {
        if(tableau[i] % 2 == 0) {  
            printf("%d\n", tableau[i]);  
        }
    }

    return 0;
}
