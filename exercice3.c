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

    for (int i = 0; i < NB_BATIMENTS; i++) {
        printf("\n--- Saisie des donnees du Batiment %d ---\n", i + 1);
        
        printf("Nom du batiment : ");
        scanf("%s", batiments[i].nom_batiment);

        printf("Surface du batiment (en m2) : ");
        scanf("%f", &batiments[i].surface);

        printf("Consommation energetique (en kWh) : ");
        scanf("%f", &batiments[i].conso);

        printf("Type du batiment : ");
        scanf("%s", batiments[i].type_batiment);

        intensites[i] = batiments[i].conso / batiments[i].surface;
        printf("→ Intensite energetique du Batiment %d : %.2f\n", i + 1, intensites[i]);
    }

    // Détermination du bâtiment le plus performant
    int index_min = 0;
    for (int i = 1; i < NB_BATIMENTS; i++) {
        if (intensites[i] < intensites[index_min]) {
            index_min = i;
        }
    }

    printf("\nLe batiment le plus performant est le Batiment %d : %s\n", 
           index_min + 1, batiments[index_min].nom_batiment);

    return 0;
}
