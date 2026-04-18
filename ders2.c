#include <stdio.h>


int main(){
    int sayi;
    printf("Lutfen bir sayi giriniz");
    scanf("%d",&sayi);
    if (sayi%2==1)
    {
        printf("Girdiginiz sayi tek sayidir");
    }

    else{
        printf("Girdiginiz sayi cift sayidir");
    }
    
    return 0;

}