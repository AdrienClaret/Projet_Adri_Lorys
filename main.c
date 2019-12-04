// Système de carrefour à feux, par Adrien Claret et Lorys Alda

// Bibliothèque
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "liste_chainee.h"

// Constantes

#define TEMPS_PASSAGE 10
#define LOI_LAMBDA 0.1 // paramètre de la loi exp
#define TV 10 // temps du feu vert
#define TJ 6 // temps du feu orange
#define TR 10 // temps du feu rouge
#define TEMPS 100
#define INTERVALLE_MAX 20 //intervalle d'arrivée max d'un véhicule


//Fonctions

double intervalle();
void ecrire_fichier(struct vehicules);


// Structures
typedef struct vehicules vehicules;
struct vehicules{
    double heure_arrivee;
    double temps_attente;
};

// Code

int main() {

    int seed=0; // Pour démarrer l'aléatoire de la fonction intervalle

    for (int temps = 0; temps < TEMPS ; temps++)
    {
        // Arrivée des voitures

        int t0 = temps;
        int t1 = t0 + intervalle();
        if (temps == t1)
        {
            vehicules voiture;
            voiture.heure_arrivee = t1;
            voiture.temps_attente = 0;
            ajouter(vehicules, liste_vehicules);


        }
    }








    vehicules voiture;
    voiture.heure_arrivee = 0; //le premier véhicule fixe l'arrivée au temps 0
    while (voiture.heure_arrivee < TEMPS) // Fixe le temps maximum de la simulation
    {
        voiture.heure_arrivee += intervalle();


    }


    // Feu vert

    int temps_restant = TV;
    while (temps_restant >= 0)
    {

        temps_restant -= 1;
    }

    // Feu orange
    int temps_restant = TJ;
    while (temps_restant >= 0)
    {

        temps_restant -= 1;
    }

    // Feu rouge

    int temps_restant = TR;

    while (temps_restant >= 0)
    {

        temps_restant -= 1;
    }


}

int intervalle(*seed)
{

    srand(*seed);

    double aleatoire = ((double)rand()/RAND_MAX)*INTERVALLE_MAX; //renvoie un nombre aléatoire entre 0 et INTERVALLE_MAX
    int ent = (int) aleatoire; // arrondi pour obtenir un entier
    *seed = rand(); // change la seed pour garder l'aléatoire
    return("%d\n",ent);
}

void ecrire_fichier(vehicules)
{
    FILE *fichier;
    fichier = fopen("Liste_vehicule.txt", "w");



    int fclose(FILE *fichier);

}