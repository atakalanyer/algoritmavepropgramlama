#include <stdio.h>

    int main(){
        int i,ele,nd=0,pd=0;

        printf("Dizi kac elemanli olsun:");
        scanf("%d",&ele);

        int dizi[ele],negatif[ele],pozitif[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemani giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele;i++){
            if(dizi[i]>=0){
                pozitif[pd]=dizi[i];
                pd++;
            }
            else{
                negatif[nd]=dizi[i];
                nd++;
            }
        }

        printf("Pozitifler: ");
        for(i=0;i<pd;i++){
            printf("%d ",pozitif[i]);
        }

        printf("\nNegatifler: ");
        for(i=0;i<nd;i++){
            printf("%d ",negatif[i]);
        }
        return 0;

    }