#include <stdio.h>

    int main(){
        int i,ele;

        printf("Pozitif artan diziniz kac sayidan olussun:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemaninizi giriniz.",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele-1;i++){
            if(dizi[i+1]-dizi[i]==1){
                printf("%d",dizi[i]);

                if(i == ele - 2 || dizi[i+2] - dizi[i+1] != 1){ /*???*/
                    printf("%d\n", dizi[i+1]);
                }
            }
        }

        return 0;
    }