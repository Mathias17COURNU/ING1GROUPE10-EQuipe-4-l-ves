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

int main() {
    int joueur1X = 0, joueur1Y = 0;  // Position initiale du Joueur 1
    int joueur2X = 9, joueur2Y = 0;  // Position initiale du Joueur 2
    int murX = -1, murY = -1;        // Position initiale du mur (non placé)
    char orientationMur = ' ';       // Orientation du mur (non défini)

    // Affichage de l'état initial de la grille
    printf("État initial de la grille:\n");
    afficherGrille(joueur1X, joueur1Y, joueur2X, joueur2Y, murX, murY, orientationMur);

    // Simulation de placement d'un mur par le joueur 1
    printf("Joueur 1 tente de placer un mur horizontal en (1, 4):\n");
    murX = 1;           // Position en X du mur
    murY = 4;           // Position en Y du mur
    orientationMur = 'H';  // Orientation du mur (horizontal)

    printf("Mur placé par le joueur 1 en (1, 4), orientation : %c\n", orientationMur);
    afficherGrille(joueur1X, joueur1Y, joueur2X, joueur2Y, murX, murY, orientationMur);

    return 0;
}
