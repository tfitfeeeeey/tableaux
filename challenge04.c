/*Challenge 4 : Trouver le Maximum
Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers.
Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

#include <stdio.h>

int main() {
    int n, i, max;

    printf("Entrez le nombre d'elements dans le tableau : ");
    scanf("%d", &n);

    int tableau[n]; 

    printf("Entrez %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];

    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i]; 
        }
    }

    printf("Le plus grand element est : %d\n", max);

    return 0;
}

