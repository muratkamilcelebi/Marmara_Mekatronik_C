#include <stdio.h>

int main() {
    int dizi[3] = {10, 20, 30};
    int *ptr = dizi; // Dizinin başlangıç adresini (10'un olduğu yer) aldık.

    printf("0. Eleman (ptr): %d, Adres: %p\n", *ptr, ptr);

    // BİR ADIM İLERİ GİDİYORUZ
    ptr++; // ptr = ptr + 1 demek. Ama hafızada 4 byte ileri atlar!
    printf("1. Eleman (ptr++): %d, Adres: %p\n", *ptr, ptr);

    // BİR ADIM DAHA
    ptr++;
    printf("2. Eleman (ptr++): %d, Adres: %p\n", *ptr, ptr);

    return 0;
}