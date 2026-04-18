#include <stdio.h>

// --- 1. PROTOTİPLER (DEKLARASYON) ---
// Sadece imzaları atıyoruz
void deger_arttir(int *p); 
void diziyi_temizle(int *dizi, int boyut);

int main() {
    int voltaj = 12;
    int sensorler[3] = {10, 20, 30};

    // Fonksiyonları çağırıyoruz
    deger_arttir(&voltaj); 
    diziyi_temizle(sensorler, 3);

    printf("Yeni Voltaj: %d\n", voltaj);
    printf("Temizlenen Ilk Sensor: %d\n", sensorler[0]);

    return 0;
}

// --- 2. TANIMLAR (DEFINITION) ---
// İşin mutfağı burada, main'in altında

void deger_arttir(int *p) {
    *p = *p + 5; // Adrese gidip değeri 5 arttırıyoruz
}

void diziyi_temizle(int *dizi, int boyut) {
    for(int i = 0; i < boyut; i++) {
        *(dizi + i) = 0; // Pointer aritmetiği ile diziyi sıfırlıyoruz
    }
}