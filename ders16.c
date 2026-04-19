#include <stdio.h>

void en_buyuk(int *veriler,int boyut);

int  main(){
    int adet;
    printf("Kac adet veri gireceksiniz");
    scanf("%d",&adet);

    int veriler_dizisi[adet];

    for(int i=0 ; i<adet; i++){
        printf("%d. veriyi giriniz",i+1);
        scanf("%d",(veriler_dizisi+i));

    }

    en_buyuk(veriler_dizisi,adet);

    return 0;

    
}

void en_buyuk(int *veriler,int boyut){
    int buyuk=*(veriler);
    int kucuk=*(veriler);

    for (int i = 0; i <boyut; i++)
    {
        if (*(veriler+i)>buyuk)
        {
            buyuk=*(veriler+i);
        }
        
    }

    for (int i = 0; i <boyut; i++)
    {
        if (*(veriler+i)<kucuk)
        {
            kucuk=*(veriler+i);
        }
        
    }

    
    printf("En kucuk %d\n",kucuk);
    printf("En buyuk %d",buyuk);

}