#include <stdio.h>

int main() {
    char metin[100];
    char *p_baslangic, *p_son;

    printf("Bir kelime giriniz: ");
    scanf("%s", metin); // Kelimeyi aldık

    p_baslangic = metin; // Dizinin başını tutuyoruz
    p_son = metin;       // Şimdilik burası da başta

    // 1. ADIM: Pointer'ı metnin sonuna ( \0 karakterine) kadar koştur
    while (*p_son != '\0') {
        p_son++;
    }

    // p_son şu an '\0' üzerinde, bir geri gelirsek son harfe ulaşırız
    p_son--;

    printf("Metnin ters hali: ");

    // 2. ADIM: Sondan başa doğru her harfi yazdır ve adresi azalt
    // Başlangıç adresine gelene kadar geri gitmeye devam et
    while (p_son >= p_baslangic) {
        printf("%c", *p_son); // O adresteki harfi bas
        p_son--;              // Pointer'ı bir geri kaydır (RAM'de geri yürü)
    }

    printf("\n");

    return 0;
}