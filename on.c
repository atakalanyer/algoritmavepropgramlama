#include <stdio.h>

    int main(){
        int min,i,ele,j=0,fark,gec;

        printf("Pozitif artan diziniz kac sayi olacak:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. sayinizi giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        min=dizi[1]-dizi[0];

        for(i=0;i<ele;i++){
            fark=dizi[i+1]-dizi[i];

            if(fark<min){
                min=fark;
                gec=i;
            }

        }

        printf("En kucuk fark:%d \n",min);
        printf("%d ile %d arasinda",dizi[gec],dizi[gec+1]);

        return 0;
    }