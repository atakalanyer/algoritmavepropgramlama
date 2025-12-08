#include <stdio.h>

    int main(){
        int ele,i,min;

        printf("Diziniz kac elemanli olacak:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemaninizi giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        min=dizi[0];

        for(i=1;i<ele;i++){
            if(dizi[i]<min){
                min=dizi[i];
            }
        }
        printf("En kucuk eleman:%d",min);
        return 0;
    }