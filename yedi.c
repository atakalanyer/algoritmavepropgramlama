#include <stdio.h>

    int main(){
        int sayac=0,i,ele;

        printf("Dizin kac elemanli olsun:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. sayinizi giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele;i++){
            if(dizi[i]==0){
                sayac++;
            }
        }
        printf("Dizinizde bulunan sifir sayisi: %d",sayac);
        return 0;
    }