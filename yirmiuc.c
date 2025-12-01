#include <stdio.h>

    int main(){
        int sifre;

        do{
            printf("Sifrenizi giriniz:");
            scanf("%d",&sifre);
            
            if(sifre!=123456){
                printf("Sifreniz yanlis tekrar deneyiniz.\n");
            }
        }
        while(sifre!=123456);

        printf("Sifreniz dogru giris yapiliyor.");

        return 0;
    }