/*Challenge 10 : Rechercher un Élément
Écrivez un programme C
qui recherche un élément spécifique dans un tableau d'entiers en utilisant une recherche linéaire.
Le programme doit demander à l'utilisateur le nombre d'éléments,
les éléments du tableau, et l'élément à rechercher,
puis afficher si l'élément est présent ou non.*/

#include <stdio.h>

int main() {
    int n, i, element, trouver = 0;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l'element a rechercher: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (tableau[i] == element) {
            trouver = 1; 
            break;      
        }
    }

    if (trouver) {
        printf("Element %d est present dans le tableau.\n", element);
    } else {
        printf("Element %d n'est pas present dans le tableau.\n", element);
    }

    return 0;
}
