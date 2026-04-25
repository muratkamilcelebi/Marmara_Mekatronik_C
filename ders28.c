#include <stdio.h>
#include <string.h>

struct Konum {
    float enlem;
    float boylam;
    int irtifa;
};

struct IHA {
    char iha_adi[20];
    struct Konum gps; 
    int batarya;
};

void telemetri_ozet(struct IHA filo[], int adet);

int main() {
    
    struct IHA filo[2];

    printf("--- IHA VERI GIRIS SISTEMI ---\n");

    for (int i = 0; i < 2; i++) {
        printf("\n[%d. IHA Bilgilerini Giriniz]\n", i + 1);
        
        printf("IHA Adi: ");
        scanf("%s", filo[i].iha_adi);

        printf("Enlem ve Boylam (Bosluk birakarak gir): ");
        scanf("%f %f", &filo[i].gps.enlem, &filo[i].gps.boylam);

        printf("Irtifa (Metre): ");
        scanf("%d", &filo[i].gps.irtifa);

        printf("Batarya Seviyesi (0-100): ");
        scanf("%d", &filo[i].batarya);
    }

    printf("\n--- FILO TELEMETRI RAPORU OLUŞTURULUYOR ---\n");
    
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