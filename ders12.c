#include <stdio.h>

// Fonksiyon prototipi
void sensor_temizle(int *p_mesafe, int boyut);

int main() {
    // Bazı hatalı veriler içeren mesafe dizisi
    int sensor_verileri[5] = {20, -5, 40, -12, 15};

    printf("Hatali Veriler: %d, %d\n", 
            sensor_verileri[1], sensor_verileri[3]); // Sadece eksileri görelim

    // Temizlik operasyonu
    sensor_temizle(sensor_verileri, 5);

    printf("Temizlenmis Veriler: %d, %d, %d, %d, %d\n", 
            sensor_verileri[0], sensor_verileri[1], sensor_verileri[2], sensor_verileri[3], sensor_verileri[4]);

    return 0;
}

void sensor_temizle(int *p_mesafe, int boyut) {
    for(int i = 0; i < boyut; i++) {
        
        if(*(p_mesafe + i) < 0) {
            *(p_mesafe + i) = 0; // O adrese git ve değeri 0 yap
        }
    }
}