#include <stdio.h>

    int main(){
        int i;
        float sayi[5],toplam=0.0;

        for(i=0;i<5;i++){
            printf("Sayinizi giriniz:",i);
            scanf("%f",&sayi[i]);
        }

        for(i=0;i<5;i++){
            toplam+=sayi[i];
        }
        printf("%.2f sayilarinizin ortalamasi",toplam/5);
        return 0;
    }