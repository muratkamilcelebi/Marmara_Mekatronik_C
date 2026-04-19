#include <stdio.h>

void dizi_yazdir(float *p_dizi, int boyut);

int main() {
    int adet;
    
    printf("Kac adet sensor verisi gireceksiniz? ");
    scanf("%d", &adet);

    float sensor_verileri[adet]; // Kullanıcının istediği boyutta bir dizi

    // DIZIYI DOLDURMA (SCANF ILE)
    for(int i = 0; i < adet; i++) {
        printf("%d. veriyi giriniz: ", i + 1);
        
        // Buraya dikkat abi! 
        // Normalde scanf("%f", &sensor_verileri[i]) yazardık.
        // Pointer mantığıyla: sensor_verileri + i zaten bir ADRESTR.
        // O yüzden başına & koymaya gerek kalmaz.
        scanf("%f", (sensor_verileri + i)); 
    }

    printf("\n--- Veri Girisi Tamamlandi ---\n");
    dizi_yazdir(sensor_verileri, adet);

    return 0;
}

void dizi_yazdir(float *p_dizi, int boyut) {
    printf("Girdiginiz veriler: ");
    for(int i = 0; i < boyut; i++) {
        printf("%.1f  ", *(p_dizi + i));
    }
    printf("\n");
}