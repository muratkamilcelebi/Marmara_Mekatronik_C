#include <stdio.h>
#include <string.h>

struct Veri
{
    float sicaklik;
    float nem;
};

struct Klima
{
    char marka[20];
    int hedef_sicaklik;
    int hedef_nem;
    struct Veri sensor;
};

void klima_analiz(struct Klima *ptr);

int main(){
    struct Klima Klima1;

    printf("Lutfen klima markasini giriniz\n");
    scanf("%s",Klima1.marka);

    printf("Lutfen Hedef sicakligi giriniz\n");
    scanf("%d",&Klima1.hedef_sicaklik);

    printf("Lutfen Hedef nem durumunu giriniz\n");
    scanf("%d",&Klima1.hedef_nem);

    Klima1.sensor.sicaklik=35;
    Klima1.sensor.nem=30;

    klima_analiz(&Klima1);

    return 0;
}

void klima_analiz(struct Klima *ptr){
    printf("Odanin mevcut sicakligi %.2f\nOdanin mevcut nemi %.2f",ptr->sensor.sicaklik,ptr->sensor.nem);

    if(ptr->sensor.sicaklik > (ptr->hedef_sicaklik)+5){
        printf("\nSogutna modu acildi\n");
    }

    if(ptr->sensor.nem > ptr->hedef_nem){
        printf("Yuksek nem tespit edildi");
    }
}





