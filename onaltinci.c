#include <stdio.h>

    int main(){
        int sayi,i,toplam=0;

        printf("Bir sayi giriniz:");
        scanf("%d",&sayi);

        for(i=1;i<=sayi;i++){
            toplam+=i;
        }
        printf("Toplam %d",toplam);
        return 0;
    }