#include <stdio.h>
#include <string.h>

struct SeraIstasyonu{
    char lokasyon[30];
    float sicakliklar[3];
    float kritik_esik;
};

void kontrol_et(struct SeraIstasyonu *ptr);


int main(){
    struct SeraIstasyonu sera;
    printf("Lutfen Lokasyonu giriniz\n");
    scanf("%s",sera.lokasyon);
    printf("Lutfen kiritik esik degerini giriniz\n");
    scanf("%f",&sera.kritik_esik);

    printf("Sicaklik bilgileri aliniyor....");

    for (int i = 0; i < 3; i++)
    {
        scanf("%f",(sera.sicakliklar + i));
    }

    
    kontrol_et(&sera);
    return 0; 
}

void kontrol_et(struct SeraIstasyonu *ptr){
    int alarm =0;
    printf("%s analiz ediliyor\n ",ptr->lokasyon);

    for (int i = 0; i < 3; i++)
    {
        if(ptr->sicakliklar[i]>ptr->kritik_esik){
            printf("Kritik esik asildi!!\n %d. sensor asiri isindi %.2f derece kadar sogumasi lazim",i+1,ptr->sicakliklar[i]-ptr->kritik_esik);
            alarm=1;
        }
    }

    if(alarm==0){
        printf("Eşik deger aşilmadi,sicakliklarda herhangi bir sorun yok");
    }
    
    

}

