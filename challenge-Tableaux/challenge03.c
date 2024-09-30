/*Challenge 3 : Somme des Éléments
Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers.
Le programme doit demander le nombre d'éléments,
puis les éléments du tableau, et afficher la somme totale.*/


#include <stdio.h>

int main() {
    int nbrelm, somme = 0;

    printf("Entrez le nombre d'elements dans le tableau: ");
    scanf("%d", &nbrelm);

    int tableau[nbrelm];

    for(int i = 0; i < nbrelm; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for(int i = 0; i < nbrelm; i++) {
        somme += tableau[i];

    printf("La somme des elements du tableau est: %d\n", somme);
    }
    return 0;
}
