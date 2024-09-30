/*Challenge 9 : Inversion d'un Tableau
Écrivez un programme C qui inverse les éléments d'un tableau d'entiers.
Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé.*/

#include <stdio.h>

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    
    int temp;
        for(int i = 0; i < taille / 2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[taille - i - 1];
        tableau[taille - i - 1] = temp;
    }
    
    printf("Tableau inversé : \n");
    for(int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    
    return 0;
}
