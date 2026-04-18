#include <stdio.h>

int main(){
    int sayi1,sayi2;
    int mod;
    printf("Lutfen iki adet sayi giriniz");
    scanf("%d%d",&sayi1,&sayi2);
    mod=sayi1%sayi2;
    printf("Birinci sayi=%d \nIkinci sayi=%d\n",sayi1,sayi2);
    printf("Mod=%d",mod);
    return 0;


}