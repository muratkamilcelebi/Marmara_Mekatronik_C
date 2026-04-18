#include <stdio.h>

int main() {
    // Senaryo: Sensörden 8-bitlik bir veri geldi: 12 (Binary: 00001100)
    // Bizim için sadece 3. bit önemli (Mesela: Motor Arıza Lambası)
    unsigned char sensor_verisi = 4; 

    // Maske oluşturuyoruz: Sadece 3. biti 1 olan sayı (00001000)
    // 1 sayısını 3 kez sola kaydırarak 8 değerini elde ederiz.
    unsigned char maske = (1 << 3);

    printf("Gelen Ham Veri: %d\n", sensor_verisi);
    printf("Uygulanan Maske: %d\n", maske);

    // & (AND) İşlemi: Veri ile maskeyi üst üste koyar.
    // Sadece maskede 1 olan yerdeki veriyi aşağı geçirir.
    
    // İşlem Şeması:
    // Veri:  00001100 (12)
    // Maske: 00001000 (8)
    // -----------------
    // Sonuc: 00001000 (8) -> Sıfırdan farklı olduğu için 'if' çalışır.

    if (sensor_verisi & maske) {
        printf("SONUC: 3. bit AKTIF (Sinyal Var!)\n");
    } else {
        printf("SONUC: 3. bit pasif (Sinyal Yok).\n");
    }

    return 0;
}