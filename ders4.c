#include <stdio.h>

int main() {
    // Başlangıçta tüm ışıklar sönük: 00000000
    unsigned char port = 0; 
    printf("Baslangic durumu: %d\n", port);

    // 1. ADIM: 3. BİTİ YAK (BIT SET)
    // '|=' (OR) operatörü kullanırız. "Veya" demek "Ekle" demektir.
    port |= (1 << 3); 
    printf("3. bit yandi: %d (Binary: 00001000)\n", port);

    // 2. ADIM: 3. BİTİ SÖNDÜR (BIT CLEAR)
    // '&=' (AND) ve '~' (NOT) operatörü kullanırız. 
    // '~' işareti maskeyi ters çevirir (11110111 yapar)
    port &= ~(1 << 3); 
    printf("3. bit sondu: %d (Binary: 00000000)\n", port);

    return 0;
}