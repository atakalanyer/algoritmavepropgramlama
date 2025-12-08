#include <stdio.h>

    int main(){
        int gun;

        printf("Haftanin kacinci gunu oldugunu giriniz:");
        scanf("%d",&gun);

        switch(gun){
            case 1:
                printf("Bugun pazartesi, keskeler, neyseler, belkiler...");
                break;

            case 2:
                printf("Bugun sali, ben gibi sev sen gibi birini.");
                break;

            case 3:
                printf("Bugun carsamba, bana degismissin diyorsun oysa sen eskisi gibi kullanamiyorsun.");
                break;

            case 4:
                printf("Bugun persembe, guzel hevessin ama kursagimda yer kalmadi.");
                break;

            case 5:
                printf("Bugun cuma, haftanin 6 gunu imansizlik yapip bugun sana siginanlari affetme yarabbi hayirli cumalar. ");
                break;

            case 6:
                printf("Bugun cumartesi, yuz yuze herkes iyi mevzu sirtimizi donunce basliyor.");
                break;
            
            case 7:
                printf("Bugun pazar, neseli birsey cal hayat ama ne olur benden degil..!");
                break;

            default:
                printf("Gecerli bir gun sayisi girmediniz.");
        
        }
        return 0;
    }