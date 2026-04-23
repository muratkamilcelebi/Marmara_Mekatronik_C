#include <stdio.h>

struct Motor {
    char isim[20];
    float sicaklik;
};

// Fonksiyon: Tüm motorları gezer ve rapor çıkarır
void fabrika_raporu(struct Motor motorlar[], int adet);

int main() {
    // 3 elemanlı bir struct dizisi tanımlıyoruz
    struct Motor fabrika[3] = {
        {"Konveyor", 35.5},
        {"Pres Makinesi", 42.0},
        {"Robot Kol", 38.8}
    };

    printf("--- Fabrika Otomasyon Sistemi Baslatildi ---\n");

    // Raporu yazdıralım
    fabrika_raporu(fabrika, 3);

    // Bir motorun sıcaklığını güncelleyelim
    printf("\nPres Makinesi sicakligi artiyor...\n");
    fabrika[1].sicaklik = 55.5; // Dizinin 1. elemanına ulaştık

    fabrika_raporu(fabrika, 3);

    return 0;
}

void fabrika_raporu(struct Motor motorlar[], int adet) {
    printf("\n[GUNCEL DURUM]\n");
    for (int i = 0; i < adet; i++) {
        printf("Cihaz: %-15s | Sicaklik: %.2f C\n", motorlar[i].isim, motorlar[i].sicaklik);
        
        if (motorlar[i].sicaklik > 50) {
            printf(">> [UYARI]: %s asiri isiniyor! Soğutma acildi.\n", motorlar[i].isim);
        }
    }
}