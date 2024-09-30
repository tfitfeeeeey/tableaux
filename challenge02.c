/*Challenge 2 : Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau,
puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.*/

#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableau[n]; // Tableau dynamique selon le nombre d'elements

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i );
        scanf("%d", &tableau[i]);
    }

    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}