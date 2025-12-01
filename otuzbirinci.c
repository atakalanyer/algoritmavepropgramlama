#include <stdio.h>

    int main(){
        char harf;

        printf("Kucuk bir harf giriniz:");
        scanf("%c",&harf);

        if(harf=='a' || harf=='e' || harf=='i' || harf=='o' || harf=='u'){
            printf("Sesli harf");
        }
        else{
            printf("Sessiz harf");
        }
        return 0;
    }