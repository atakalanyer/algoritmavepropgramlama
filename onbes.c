#include <stdio.h>

int main() {
    int ele, i;

    printf("Dizi kac elemanli olsun: ");
    scanf("%d", &ele);

    int dizi[ele];

    for(i=0;i<ele;i++){
        printf("%d. elemani gir: ", i+1);
        scanf("%d", &dizi[i]);
    }

    int son=dizi[ele-1];

    for(i=ele-1;i>0;i--){
        dizi[i] = dizi[i-1];
    }

    dizi[0]=son;

    printf("Saga kaydirilmis dizi:");
    for(i=0;i<ele;i++){
        printf("%d ", dizi[i]);
    }

    return 0;
}
