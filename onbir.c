#include <stdio.h>

    int main(){
        int i,ele,z;

        printf("Zigzag diziniz kac sayidan olussun:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemaninizi giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele-2;i++){
            if((dizi[i+1]-dizi[i]>0) && (dizi[i+2]-dizi[i+1]<0)){
                z=1;
                continue;

            }
            else{
                z=0;
            }
        }
        if(z==1){
            printf("Zigzag dizi girdiniz.");
        }
        else{
            printf("Girdiginiz dizi zigzag degil.");
        }
        return 0;
    }