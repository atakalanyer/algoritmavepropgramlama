#include <stdio.h>

    int main(){
        int bas=0,sayi;

            printf("Basamagini hesaplamak istediginiz sayiyi giriniz:");
            scanf("%d",&sayi);
        do{

            bas++;
            sayi=sayi/10;

        }
        while(sayi>0);
        printf("Sayiniz %d basamakli",bas);
        return 0;
    }