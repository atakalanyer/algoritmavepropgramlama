#include <stdio.h>

    int main(){
        int sayi,b2=0,b3=0,b5=0,b7=0;

        printf("Sayinizi giriniz:");
        scanf("%d",&sayi);

        while(sayi%2==0){
            b2++;
            sayi/=2;
        }

        while(sayi%3==0){
            b3++;
            sayi/=3;
        }

        while(sayi%5==0){
            b5++;
            sayi/=5;
        }

        while(sayi%7==0){
            b7++;
            sayi/=7;
        }

        printf("2^%d 3^%d 5^%d 7^%d",b2,b3,b5,b7);
        return 0;
    }