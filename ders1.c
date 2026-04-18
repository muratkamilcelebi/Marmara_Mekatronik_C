#include <stdio.h>

int main(){
    char harf;
    
    printf("bu programda a harfini A harfine çeviricez lütfen e tuşuna basiniz");
    scanf(" %c ",&harf);
    if(harf=='e'){
        printf("%c",'a'-32);
        
    }

    return 0;
}