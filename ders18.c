#include <stdio.h>

// Fonksiyon: Metin icindeki belirli bir harfi sayar
int harf_say(char *p_metin, char aranan);

int main() {
    // Karakter dizisi (String)
    char mesaj[] = "Marmara Mekatronik C Dersleri";
    int sonuc;

    printf("Metin: %s\n", mesaj);

    // 'a' harfini arayalim
    sonuc = harf_say(mesaj, 'a');

    printf("Metinde %d tane 'a' harfi bulundu.\n", sonuc);

    return 0;
}

int harf_say(char *p_metin, char aranan) {
    int sayac = 0;

    // Pointer NULL karakterine (\0) ulasana kadar don
    while (*p_metin != '\0') {
        if (*p_metin == aranan) {
            sayac++;
        }
        p_metin++; // Bir sonraki harfin adresine git (Pointer aritmetigi)
    }

    return sayac;
}