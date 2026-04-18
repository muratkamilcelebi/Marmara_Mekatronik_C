#include <stdio.h>

int main() {
    int sicaklik = 25;
    int *ptr = &sicaklik; // Pointer'ı adrese bağladık

    printf("Eski Sicaklik: %d\n", sicaklik);

    // DİKKAT: Pointer üzerinden orijinal değeri değiştiriyoruz
    // "ptr'nin gösterdiği adresteki kutuya git ve içine 40 yaz" diyoruz.
    *ptr = 40; 

    printf("Yeni Sicaklik: %d\n", sicaklik);

    return 0;
}