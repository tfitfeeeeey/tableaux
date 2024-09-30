/*Challenge 13 : Afficher les Éléments Impairs
Écrivez un programme C qui affiche uniquement les éléments impairs d'un tableau d'entiers.
Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

#include <stdio.h>

int main() {
    int taille;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &taille);

    int tableau[taille];

    printf("Entrez les %d elements :\n", taille);
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Les éelements impairs sont :\n");
    for (int i = 0; i < taille; i++) {
        if (tableau[i] % 2 != 0) { 
            printf("%d\n", tableau[i]);
        }
    }
    return 0;
}
