#include <stdio.h>

int main(){
    int i, ele;

    printf("Diziniz kac sayidan olussun: ");
    scanf("%d", &ele);

    int dizi[ele];

    for(i = 0; i < ele; i++){
        printf("%d. elemaninizi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("\nArdisik gruplar:\n");
    
    for(i = 0; i < ele - 1; i++){
        if(dizi[i+1] - dizi[i] == 1){
            printf("%d ", dizi[i]);
            // Son eleman da ardışık grubun parçasıysa onu da yazdır
        }
    }

    return 0;
}