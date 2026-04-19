#include <stdio.h>


void ortalama(float*sensor,float boyut);

int main(){
    float sensor_verileri[5]={30,26,26,28,31};

    ortalama(sensor_verileri,5);

    return 0;

}


void ortalama(float*sensor,float boyut){

    float toplam;

    for(int i=0; i<boyut; i++){
        toplam += *(sensor+i);
    }
    printf("Ortalama deger %.2f ",(toplam/boyut));


}