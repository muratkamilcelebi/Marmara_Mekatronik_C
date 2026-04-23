#include <stdio.h>

// 1. ADIM: Struct Yapısı
struct Arac {
    char plaka[15];
    int park_suresi;
};

// 2. ADIM: Fonksiyon Deklarasyonu (Prototip)
// Bilgisayara diyoruz ki: "Bak abi, aşağıda böyle bir fonksiyon var, haberin olsun."
void otopark_kontrol(struct Arac otopark[], int adet);

int main() {
    struct Arac arabalar[3];

    for (int i = 0; i < 3; i++) {
        printf("\n%d. Aracin plakasini giriniz: ", i + 1);
        scanf("%s", arabalar[i].plaka);
        
        printf("%d. Aracin park suresini (dk) giriniz: ", i + 1);
        scanf("%d", &arabalar[i].park_suresi);
    }

    // Fonksiyonu çağırıyoruz
    otopark_kontrol(arabalar, 3);

    return 0;
}

// 3. ADIM: Fonksiyon Tanımlaması (Gövdesi)
void otopark_kontrol(struct Arac otopark[], int adet) {
    printf("\n--- OTOPARK UCRET RAPORU ---\n");
    
    for (int i = 0; i < adet; i++) {
        int ucret = (otopark[i].park_suresi > 60) ? 50 : 20;

        printf("Plaka: %-12s | Sure: %d dk | Ucret: %d TL\n", 
                otopark[i].plaka, otopark[i].park_suresi, ucret);
    }
}

