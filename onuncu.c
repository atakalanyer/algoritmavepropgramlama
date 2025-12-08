#include <stdio.h>
    
    int main(){
        int sayi,lsayi;

        printf("Son sayinizi yaziniz efendim:");
        scanf("%d",&lsayi);

        for(sayi=1;sayi<=lsayi;sayi++){
            if(sayi%2==0){
                printf("%d ",sayi);
            }
        }
        return 0;
    }