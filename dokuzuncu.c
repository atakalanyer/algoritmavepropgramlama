#include <stdio.h>

    int main(){
        int k,ssayi;

        printf("O sayiya kadarki kareleri yazdirmak istediginiz sayiyi giriniz:");
        scanf("%d",&ssayi);

        for(k=1;k*k<=ssayi;k++){
            printf("%d\n",k*k);
        }
        return 0;
    }