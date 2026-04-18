#include <stdio.h>

int main(){
    int sayi1,sayi2,kalan;
    float sonuc;

    printf("Lutfen iki adet sayi giriniz");
    scanf("%d%d",&sayi1,&sayi2);
    if (sayi1>=sayi2)
    {
        sonuc=(float)sayi1/sayi2;
        kalan=sayi1%sayi2;
        printf("Sonucumuz %f ve kalan degerimiz %d",sonuc,kalan);
    }

    else{
        sonuc=(float)sayi2/sayi1;
        kalan=sayi2%sayi1;
        printf("Sonucumuz %f ve kalan degerimiz %d",sonuc,kalan);


    }


    return 0;
}