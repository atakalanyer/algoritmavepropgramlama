#include <stdio.h>
#include <string.h>

    int main(){
        char sifre[100];

        do{
            printf("Sifre olusturunuz en az 6 karakter olsun:");
            scanf("%s",&sifre);

            if(strlen(sifre)< 6 ){
                printf("Sifreniz cok kisa tekrar deneyiniz.\n");
            }
        }
        while(strlen(sifre)< 6 );
        printf("Sifre kabul edildi.");
        return 0;
    }