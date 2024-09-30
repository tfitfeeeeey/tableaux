/*Challenge 2 : Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau,
puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.*/

#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int tableau[n]; // Tableau dynamique selon le nombre d'éléments

    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i );
        scanf("%d", &tableau[i]);
    }

    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}