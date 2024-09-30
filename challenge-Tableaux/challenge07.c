/*Challenge 7 : Tableau en Ordre Croissant
Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers,
puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.*/


#include <stdio.h>

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];

    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie en ordre croissant :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
