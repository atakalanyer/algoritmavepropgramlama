#include <stdio.h>

    int main(){
        int yas;

        do{
            printf("Yasinizi giriniz:");
            scanf("%d",&yas);

            if(yas>0 && yas<17){
                printf("Ergen grubunda bulunuyorsunuz.");
            }
            else if(yas>=18 && yas<65){
                printf("Genc grubunda bulunuyorsunuz.");
            }
            else if(yas>=65 && yas<79){
                printf("Orta yas grubunda bulunuyorsunuz.");
            }
            else if(yas>=80 && yas<99){
                printf("Yasli grubunda bulunuyorsunuz.");
            }
            else if(yas>=99 && yas<=120){
                printf("Cok yasli grubundasiniz.");
            }
            else{
                printf("Gecerli yas girmediniz tekrar deneyiniz:\n");
            }
        }
        while(yas<=0 || yas>120);
        return 0;
    }