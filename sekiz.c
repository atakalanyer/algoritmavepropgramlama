#include <stdio.h>

    int main(){
        int ele,i,ou=0,oa=0,oo=0;
        float toplam=0.0,ort=0.0;

        printf("Dizi kac elemanli olsun:");
        scanf("%d",&ele);

        int dizi[ele],alti[ele],ustu[ele],orta[ele];

        for(i=0;i<ele;i++){
            printf("%d. elemani gir:",i+1);
            scanf("%d",&dizi[i]);
        }
        
        for(i=0;i<ele;i++){
            toplam+=dizi[i];
        }
        
        ort=toplam/ele;

        for(i=0;i<ele;i++){
            if(dizi[i]>ort){
                ustu[ou]=dizi[i];
                ou++;
            }
            else if(dizi[i]<ort){
                alti[oa]=dizi[i];
                oa++;
            }
            else{
                orta[oo]=dizi[i];
                oo++;
            }
        }

        printf("Ortalama:%0.2f",ort);

        printf("\nOrtalama ustuler: ");
        for(i=0;i<ou;i++){
            printf("%d ",ustu[i]);
        }

        printf("\nOrtalama altilar: ");
        for(i=0;i<oa;i++){
            printf("%d ",alti[i]);
        }

        printf("\nOrtalamadakiler: ");
        for(i=0;i<oo;i++){
            printf("%d ",orta[i]);
        }
        return 0;
    }