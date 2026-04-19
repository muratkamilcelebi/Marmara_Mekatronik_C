#include <stdio.h>

// Fonksiyon: Sensör gürültüsünü temizler
// *p_veriler: Dizinin başlangıç adresi
// boyut: Dizide kaç veri olduğu
// limit: Kabul edilebilir maksimum değişim miktarı
void sensor_filtrele(int *p_veriler, int boyut, int limit);

int main() {
    
    int sensor_kayitlari[5] = {148, 150, 300, 152, 149};

    printf("Filtre Oncesi: %d, %d, %d, %d, %d\n", 
            sensor_kayitlari[0], sensor_kayitlari[1], sensor_kayitlari[2], 
            sensor_kayitlari[3], sensor_kayitlari[4]);

    // Filtrelemeyi başlat
    sensor_filtrele(sensor_kayitlari, 5, 50);

    printf("Filtre Sonrasi: %d, %d, %d, %d, %d\n", 
            sensor_kayitlari[0], sensor_kayitlari[1], sensor_kayitlari[2], 
            sensor_kayitlari[3], sensor_kayitlari[4]);

    return 0;
}

void sensor_filtrele(int *p_veriler, int boyut, int limit) {
    for(int i = 1; i < boyut; i++) {
        // Mevcut veri ile bir önceki veri arasındaki farkı bul
        // Pointer aritmetiği: *(p_veriler + i) mevcut, *(p_veriler + i - 1) bir önceki
        int fark = *(p_veriler + i) - *(p_veriler + i - 1);

        // Eğer fark belirlediğimiz limitten (50) büyükse, bu bir gürültüdür!
        if(fark > limit || fark < -limit) {
            // Hatalı veriyi, bir önceki verinin aynısı yap (Hizaya sok)
            *(p_veriler + i) = *(p_veriler + i - 1);
            printf("--- [BILGI] %d. indeksteki gurultu temizlendi! ---\n", i);
        }
    }
}