#include <stdio.h>

    int main(){
        int sayi,bas,toplam=0,s1;

        printf("Sayi gir:");
        scanf("%d",&sayi);

        s1=sayi;

        while(s1!=0){
            bas=s1%10;
            toplam+=bas*bas*bas;
            s1/=10;
        }
        if(toplam==sayi){
            printf("Girdiginiz sayi bir armstrong sayidir.");
        }
        else{
            printf("Girdiginiz sayi bir armstrong sayi degildir.");
        }
        return 0;
    }