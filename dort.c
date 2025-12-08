#include <stdio.h>

    int main(){
        int i,ele,cd=0,td=0;

        printf("Dizi kac elemanli olsun:");
        scanf("%d",&ele);

        int dizi[ele],tek[ele],cift[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemani giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele;i++){
            if(dizi[i]%2==0){
                cift[cd]=dizi[i];
                cd++;
            }
            else{
                tek[td]=dizi[i];
                td++;
            }
        }

        printf("Ciftler: ");
        for(i=0;i<cd;i++){
            printf("%d ",cift[i]);
        }

        printf("\nTekler: ");
        for(i=0;i<td;i++){
            printf("%d ",tek[i]);
        }
        return 0;

    }