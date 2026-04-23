#include <stdio.h>
#include <string.h>

struct Koordinat
{
    int x;
    int y;
};

struct RobotEklem
{
    char eklem_adi[20];
    struct Koordinat konum;
    int guc_yuzdesi;
};

void durum_yazdir(struct RobotEklem *ptr);

int main(){

    struct RobotEklem omuz={"Omuz Eklemi",{10,20},85};
    durum_yazdir(&omuz);

    printf("\nOmuz ekleminin yeni X koordinatlarini girin:");
    scanf("%d",&omuz.konum.x);

    printf("Yeni Durum:\n");
    durum_yazdir(&omuz);
    return 0;
}

void durum_yazdir(struct RobotEklem *ptr){

    printf("Eklem:%s",ptr->eklem_adi);
    printf("Konum: [%d , %d]\n",ptr->konum.x,ptr->konum.y);
    printf("Guc:%%%d",ptr->guc_yuzdesi);

}

