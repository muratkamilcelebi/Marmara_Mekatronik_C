#include <stdio.h>
#include <string.h>

// 1. ADIM: Paketin taslagini (Struct) olusturuyoruz
struct Motor {
    char isim[20];
    int aci;
    float voltaj;
};

// Fonksiyon: Motorun acisini pointer ile gunceller
void aci_guncelle(struct Motor *p_mtr, int yeni_aci);

int main() {
    // 2. ADIM: Struct'tan bir "nesne" olusturuyoruz
    struct Motor motor1 = {"Step Motor 1", 0, 12.5};

    printf("Guncelleme Oncesi: %s - Aci: %d - Voltaj: %.1fV\n", 
            motor1.isim, motor1.aci, motor1.voltaj);

    // 3. ADIM: Motorun ADRESINI fonksiyona gonderiyoruz
    aci_guncelle(&motor1, 90);

    printf("Guncelleme Sonrasi: %s - Aci: %d - Voltaj: %.1fV\n", 
            motor1.isim, motor1.aci, motor1.voltaj);

    return 0;
}

void aci_guncelle(struct Motor *p_mtr, int yeni_aci) {
    // KRITIK NOKTA: Struct pointer ile bir degiskene ulasirken
    // nokta (.) degil, OK ISARETI (->) kullanilir abi!
    p_mtr->aci = yeni_aci;
    
    printf("\n[SISTEM]: %s acisi %d dereceye ayarlandi.\n", p_mtr->isim, p_mtr->aci);
}