# ING1GROUPE10-EQuipe-4-l-ves
#include <stdio.h>

#define TAILLE_GRILLE 10  // Taille de la grille

// Fonction pour afficher la grille avec les positions des joueurs et le mur
void afficherGrille(int joueur1X, int joueur1Y, int joueur2X, int joueur2Y, int murX, int murY, char orientationMur) {
    for (int i = 0; i < TAILLE_GRILLE; i++) {
        for (int j = 0; j < TAILLE_GRILLE; j++) {
            if (i == joueur1X && j == joueur1Y) {
                printf("P1 ");
            } else if (i == joueur2X && j == joueur2Y) {
                printf("P2 ");
            } else if (i == murX && j == murY && orientationMur == 'H') {
                printf("| ");  // Mur horizontal
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}