/*Challenge 11 : Remplacer un Élément
Écrivez un programme C qui remplace toutes les occurrences d'une valeur spécifique dans un tableau d'entiers par une nouvelle valeur. Le programme doit demander à l'utilisateur le nombre d'éléments,
les éléments du tableau, la valeur à remplacer, et la nouvelle valeur*/

#include <stdio.h>

int main() {
    int n, valremplacer,nouvval;

    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d éléments du tableau :\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez la valeur à remplacer : ");
    scanf("%d", &valremplacer);

    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &valremplacer);

    for(int i = 0; i < n; i++) {
        if(tableau[i] == valremplacer) {
            tableau[i] = nouvval;
        }
    }

    printf("Tableau après modification :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
