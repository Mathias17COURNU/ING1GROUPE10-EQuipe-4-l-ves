//
// Created by julie on 21/11/2024.
//

#ifndef COURS_H
#define COURS_H

#endif //COURS_H
// Définitions des constantes
#define TAILLE_PLATEAU 9
#define VIDE ' '
#define MUR 'B'
#define MAX_MURS 10
#define MAX_JOUEURS 4
#define LIMITE_TEMPS 600.0 // Limite de temps en secondes qui correspont a 10min

//sous programme
void Menu();
void Aide();
void Scores();
void NouvellePartie();
void Plateau();
void affichagePlateau();
void AfficherInfosJoueur(int joueurActuel);
void Tour(int joueurActuel);
void deplacerPion(int joueur);
void placerMur();
void sauvegarderPartie();
void reprendrePartie();
int Victoire(int joueur);
void IA(int joueurActuel);
void PionIA(int joueur);
void MurIA(int joueurActuel);
void Timer(int joueurActuel);
