/*Challenge 8 : Copie d'un Tableau
Écrivez un programme C qui copie les éléments d'un tableau d'entiers dans un autre tableau.
Affichez les éléments du tableau original et du tableau copié pour vérifier que la copie est correcte.*/

#include <stdio.h>

int main() {
    int tableauOriginal[] = {1, 2, 3, 4, 5};
    
    int taille = sizeof(tableauOriginal) / sizeof(tableauOriginal[0]);
    
    int tableauCopie[taille];
    
    for(int i = 0; i < taille; i++) {
        tableauCopie[i] = tableauOriginal[i];
    }
    
    printf("Tableau Original :\n");
    for(int i = 0; i < taille; i++) {
        printf("%d ", tableauOriginal[i]);
    }
    printf("\n");
    
    printf("Tableau Copie :\n");
    for(int i = 0; i < taille; i++) {
        printf("%d ", tableauCopie[i]);
    }
    printf("\n");
    
    return 0;
}
