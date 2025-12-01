#include <stdio.h>

    int main(){
        int ay;

        printf("Gununu ogrenmek istediginiz ayin numarasini giriniz:");
        scanf("%d",&ay);

        switch(ay){
            case 1:
                printf("Ocak ayi 31 gune sahip.");
                break;
            
            case 2:
                printf("Subat ayi 28 gune sahip.");
                break;

            case 3:
                printf("Mart ayi 31 gune sahip.");
                break;

            case 4:
                printf("Nisan ayi 30 gune sahip.");
                break;

            case 5:
                printf("Mayis ayi 31 gune sahip.");
                break;

            case 6:
                printf("Haziran ayi 30 gune sahip.");
                break;

            case 7:
                printf("Temmuz ayi 31 gune sahip.");
                break;

            case 8:
                printf("Agustos ayi 31 gune sahip.");
                break;

            case 9:
                printf("Eylül ayi 30 gune sahip.");
                break;

            case 10:
                printf("Ekim ayi 31 gune sahip.");
                break;

            case 11:
                printf("Kasim ayi 30 gune sahip.");
                break;

            case 12:
                printf("Aralik ayi 31 gune sahip.");
                break;

            default:
                printf("Girdiginiz sayi gecerli degil.");
        }
        return 0;
    }