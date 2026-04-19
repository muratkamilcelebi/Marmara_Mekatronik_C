#include <stdio.h>

int main() {
    int veriler[3];
    
    printf("--- Hafiza Dedektifligi Basliyor ---\n\n");

    // 1. Verileri alalım
    for(int i = 0; i < 3; i++) {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", (veriler + i));
    }

    

    // 2. Adresleri ve degerleri gorelim
    for(int i = 0; i < 3; i++) {
        // %p: Pointer (Adres) yazdırmak için kullanılan formattır.
        // (veriler + i): Kutunun adresini verir.
        // *(veriler + i): Kutunun icindeki degeri verir.
        printf("%-15d %-15d %-15p\n", i, *(veriler + i), (veriler + i));
    }

    printf("\n[NOT]: Adreslerin son rakamlarina bak abi, 4'er 4'er artiyor mu?\n");

    return 0;
}