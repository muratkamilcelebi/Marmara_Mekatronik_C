#include <stdio.h>
#include <string.h>

struct TekerlekSistemi{
    float hizlar[4];
    char sistem_adi[20];
};

void sistem_kontrol(struct TekerlekSistemi *ptr){
    float toplam=0;
    float ort=0;

    for (int  i = 0; i <4; i++)
    {   
        toplam +=(ptr->hizlar[i]);
    }
    ort =toplam/4;

    printf("Ortlama hiz değerimiz %.2f",ort);

    
}



int main(){

    struct TekerlekSistemi robot_kolu;
    printf("Robot Sistemine bir isim verin");
    scanf("%s",robot_kolu.sistem_adi);

    
    
    for (int  i = 0; i < 4; i++)
    {
        printf("%d tekerlek hizini giriniz",i);
        scanf("%f", (robot_kolu.hizlar + i));
    }

    sistem_kontrol(&robot_kolu);
    return 0;
    
}
