#include <stdio.h>

int main()
{
    float conso[7]; 
    float conso_total = 0;
    float conso_moyenne;
    int jour_max = 0;
    float max_conso = 0;
    
    char *day[7] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};

    for (int i = 0; i < 7; i++) {
        printf("Saisissez votre consommation du %s : ", day[i]);
        scanf("%f", &conso[i]);

        conso_total += conso[i];

        if (conso[i] > max_conso) {
            max_conso = conso[i];
            jour_max = i;
        }
    }

    conso_moyenne = conso_total / 7;

    printf("\nConsommation totale : %.2f kWh\n", conso_total);
    printf("Consommation moyenne : %.2f kWh\n", conso_moyenne);
    printf("Jour de consommation la plus élevée : %s (%.2f kWh)\n", day[jour_max], max_conso);

    return 0;
}
