/*Challenge 5 : Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers.
Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

#include <stdio.h>

int main() {
    int n, i, min;

    printf("Entrez le nombre d'elements dans le tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les elements du tableau : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    min = tableau[0];

    for(i = 1; i < n; i++) {
        if(tableau[i] < min) {
            min = tableau[i]; 
        }
    }

    printf("Le plus petit element est : %d\n", min);

    return 0;
}
