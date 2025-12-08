#include <stdio.h>

    int main(){
        int ele,i,j,tekrar=0;

        printf("Dizi kac elemanli olsun:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemani gir:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele;i++){
            for(j=i+1;j<ele;j++){
                if(dizi[i]==dizi[j]){
                    printf("%d tekrar ediyor.\n",dizi[i]);
                    tekrar=1;
                    break;
                }
            }
        }
        if(tekrar==0){
            printf("Tekrar eden eleman yok.");
        }
        return 0;
    }