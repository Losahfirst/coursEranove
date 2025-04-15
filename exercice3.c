#include <stdio.h>
#include <string.h>

#define NB_BATIMENTS 3

struct Batiment {
    char nom_batiment[50];
    float surface;
    float conso;
    char type_batiment[50];
};

int main() {
    struct Batiment batiments[NB_BATIMENTS];
    float intensites[NB_BATIMENTS];

    // Saisie des données + calcul des intensités
    for (int i = 0; i < NB_BATIMENTS; i++) {
        printf("Saisir les donnees du Batiment %d (Nom Surface Conso Type) :\n", i + 1);
        scanf("%s %f %f %s", 
              batiments[i].nom_batiment, 
              &batiments[i].surface, 
              &batiments[i].conso, 
              batiments[i].type_batiment);

        intensites[i] = batiments[i].conso / batiments[i].surface;
        printf("L'intensite energetique du Batiment %d est : %.2f\n", i + 1, intensites[i]);
    }

    // Recherche du bâtiment le plus performant (intensité la plus faible)
    int index_min = 0;
    for (int i = 1; i < NB_BATIMENTS; i++) {
        if (intensites[i] < intensites[index_min]) {
            index_min = i;
        }
    }

    printf("Le plus performant est le Batiment %d : %s\n", index_min + 1, batiments[index_min].nom_batiment);

    return 0;
}
