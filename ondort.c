#include <stdio.h>

int main() {
    int ele, i, sayac = 0;

    printf("Dizi kac elemanli olsun: ");
    scanf("%d", &ele);

    int dizi[ele];

    for(i=0;i<ele;i++){
        printf("%d. elemani gir: ", i+1);
        scanf("%d", &dizi[i]);
    }

    for(i=0;i<ele;i++){
        if(dizi[i]==i){
            printf("%d = %d  sagliyor.\n", i, dizi[i]);
            sayac++;
        }
    }

    if(sayac==0)
        printf("Hicbir eleman adresi ile ayni degil.\n");
    else
        printf("\nToplam %d adet eslesme bulundu.\n", sayac);

    return 0;
}