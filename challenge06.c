/*Challenge 6 : Multiplication des Éléments
Écrivez un programme C qui multiplie chaque élément
d'un tableau d'entiers par un facteur donné et affiche le tableau résultant. 
Le programme doit demander le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.*/

#include <stdio.h>

int main() {
    int n, facteur;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les elements du tableau:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &facteur);

    printf("Tableau apres multiplication:\n");
    for(int i = 0; i < n; i++) {
        tableau[i] = tableau[i] * facteur;
        printf("%d\n", tableau[i]);
    }

    return 0;
}
