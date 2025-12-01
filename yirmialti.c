#include <stdio.h>

    int main(){
        int boy,kilo;
        float bki;

        printf("Boyunuzu ve kilonuzu arada bir bosluk birakarak giriniz:");
        scanf("%d %d",&boy,&kilo);

        bki=kilo/(boy*boy);

        if(bki<18.5){
            printf("Zayifsiniz.");
        }
        else if(bki>=18.5 && bki<25){
            printf("Normalsiniz.");
        }
        else if(bki>=25 && bki<30){
            printf("Fazla kilolusunuz.");
        }
        else if(bki>=30 && bki<35){
            printf("Obez 1.Derece");
        }
        else if(bki>=35 && bki<40){
            printf("Obez 2.Derece");
        }
        else if(bki>=40){
            printf("Morbid obez");
        }
        return 0;
    }