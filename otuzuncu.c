#include <stdio.h>

    int main(){
        int k1=201,k2=203,k3=304,gir;

        printf("Fiyatini gormek istediginiz urunun barkod numarasini yaziniz(201/203/304):");
        scanf("%d",&gir);

        switch(gir){
            case 201:
                printf("300tl baskan");
                break;

            case 203:
                printf("350tl baskan");
                break;

            case 304:
                printf("1000000tl");
                break;

            default:
                printf("Eksik veya yanlis tuslama yaptiniz.");
        }
        return 0;
    }