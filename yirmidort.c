#include <stdio.h>

    int main(){
        int sayi,ays;

        do{
            printf("Bir sayi giriniz ama sakin tek sayi olmasinnnnn!!!!!:");
            scanf("%d",&sayi);
            if(sayi%2==0){
                printf("Aferin\n");
            }
            ays=sayi%2;
        }
        while(ays==0);
        printf("Uygulamayi bozdun cikis yapiliyor..");
        return 0;
    }