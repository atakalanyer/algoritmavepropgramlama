#include <stdio.h>

    int main(){
        int toplam=0,sayi;

        printf("Sayinizi giriniz:");
        scanf("%d",&sayi);

        do{
            toplam+=(sayi%10);
            sayi=sayi/10;
        }
        while(sayi>0);
        printf("Rakamlarin toplami %d",toplam);
        return 0;
    }