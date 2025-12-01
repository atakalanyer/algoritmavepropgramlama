#include <stdio.h>

    int main(){
        int sonuc=1,islem,sayi;

        printf("Sayinizi giriniz:");
        scanf("%d",&sayi);

        printf("Yapmak istediginiz islemi seciniz 1-Kup alma 2-Kare alma 3-Faktoriyel alma\n");
        printf("Isleminiz:");
        scanf("%d",&islem);

        switch(islem){
            case 1:
                sonuc=sayi*sayi*sayi;
                printf("\n%d",sonuc);
                break;
            
            case 2:
                sonuc=sayi*sayi;
                printf("\n%d",sonuc);
                break;

            case 3:
                for(sayi;sayi>1;sayi--){
                    sonuc*=sayi;
                }
                printf("\n%d",sonuc);       
                break;

            default:
                printf("Gecerli bir islem girmediniz.");
        }
        return 0;
    }