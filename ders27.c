#include <stdio.h>
#include <string.h>


struct Konum {
    float enlem;
    float boylam;
    int irtifa;
};


struct IHA {
    char iha_adi[20];
    struct Konum gps; // İç içe (Nested)
    int batarya;
};


void telemetri_ozet(struct IHA filo[], int adet);

int main() {
    
    struct IHA filo[2] = {
        {"Bayraktar", {41.01, 28.97, 5000}, 85},
        {"Anka", {39.93, 32.85, 4500}, 15} 
    };

    printf("--- MILI TEKNOLOJI HAMLESI IHA TAKIP SISTEMI ---\n");
    
    
    telemetri_ozet(filo, 2);

    return 0;
}


void telemetri_ozet(struct IHA filo[], int adet) {
    printf("\n%-15s | %-15s | %-10s | %-10s\n", "IHA ADI", "KOORDINAT", "IRTIFA", "BATARYA");
    printf("----------------------------------------------------------------------\n");

    for (int i = 0; i < adet; i++) {
        
        char *durum = (filo[i].batarya < 20) ? "KRITIK" : "STABIL";

        
        printf("%-15s | %.2f , %.2f | %-10d | %% %-3d (%s)\n", 
                filo[i].iha_adi, 
                filo[i].gps.enlem, 
                filo[i].gps.boylam, 
                filo[i].gps.irtifa, 
                filo[i].batarya,
                durum);
    }
}