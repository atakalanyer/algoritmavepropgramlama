#include <stdio.h>

    int main(){
        int i,ele,z;

        printf("Tek cift diziniz kac sayidan olussun:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemaninizi giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele-1;i++){
            if((dizi[i]%2==0 && dizi[i+1]%2!=0) || (dizi[i] % 2 != 0 && dizi[i+1] % 2 == 0)){
                z=1;
                continue;

            }
            else{
                z=0;
                break;
            }
        }
        if(z==1){
            printf("Cift tek dizi girdiniz.");
        }
        else{
            printf("Girdiginiz dizi cift tek'e uygun degil.");
        }
        return 0;
    }