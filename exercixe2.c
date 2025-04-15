
#include <stdio.h>


int main()
{
    float conso[7]; 
    float conso_total = 0;
    float conso_moyenne;
    int jour_max = 0;
    float max_conso = 0;

    for (int i = 0; i < 7; i++) {
        printf("Saisissez votre consommation du jour J%d : ", i + 1);
        scanf("%f", &conso[i]);

        conso_total += conso[i];

        if (conso[i] > max_conso) {
            max_conso = conso[i];
            jour_max = i + 1;
        }
    }

    conso_moyenne = conso_total / 7;

    printf("\nConsommation totale : %.2f\n", conso_total);
    printf("Consommation moyenne : %.2f\n", conso_moyenne);
    printf("Jour de consommation la plus élevée : J%d (%.2f) kWh", jour_max, max_conso);

    return 0;
}
