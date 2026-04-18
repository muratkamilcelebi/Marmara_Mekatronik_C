
#include <stdio.h>

int main(){

int dizi[3] = {10, 20, 30};

printf("Dizinin adresi: %p\n", dizi);
printf("Ilk elemanin adresi: %p\n", &dizi[0]);

return 0;

}