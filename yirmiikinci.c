#include <stdio.h>

    int main(){
        int toplam=0,sayi1,s=1;
        float ort;

        for(s;s<=5;s++){
            printf("%d. sayiyi giriniz:",s);
            scanf("%d",&sayi1);

            toplam+=sayi1;
        }
        ort=toplam/5;
        printf("Girdiginiz sayilarin ortalamasi %.2f ",ort);
        return 0;
    }