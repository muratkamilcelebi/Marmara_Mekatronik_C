#include <stdio.h>

// PROTOTİP: Bir dizi (pointer olarak) ve boyut alır.
// Dizinin içindeki tüm sıcaklıkları 5 derece arttırır.
void sicaklik_kalibre_et(int *p_dizi, int boyut);

int main() {
    // 1. DİZİ: Ham verilerimiz
    int firin_sensorleri[3] = {150, 159, 148};

    printf("Kalibrasyon Oncesi: %d, %d, %d\n", firin_sensorleri[0], firin_sensorleri[1], firin_sensorleri[2]);

    // 2. FONKSİYON ÇAĞRISI: Dizinin ismini gönderiyoruz.
    sicaklik_kalibre_et(firin_sensorleri, 3);

    printf("Kalibrasyon Sonrasi: %d, %d, %d\n", firin_sensorleri[0], firin_sensorleri[1], firin_sensorleri[2]);

    return 0;
}

// 3. FONKSİYON TANIMI:
void sicaklik_kalibre_et(int *p_dizi, int boyut) {
    for(int i = 0; i < boyut; i++) {
        // Pointer Aritmetiği: p_dizi'den i kadar ileri git ve o kutuyu aç (*)
        *(p_dizi + i) += 5 ; 
        if(*(p_dizi + i)>160){
            *(p_dizi + i)=160;
        }

        
    }
}