#include <stdio.h>

    int main(){
        int mevsim;

        printf("1 ile 4 arasi bir sayi giriniz:");
        scanf("%d",&mevsim);

        switch(mevsim){
            case 1:
                printf("Siz ilkbahar insanisiniz.");
                break;

            case 2:
                printf("Siz yaz insanisiniz.");
                break;

            case 3:
                printf("Siz sonbahar insanisiniz.");
                break;

            case 4:
                printf("Siz kis insanisiniz.");
                break;

            default:
                printf("Gecerli bir sayi girmediniz.");
        }
        return 0;
    }