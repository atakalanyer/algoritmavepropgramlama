#include <stdio.h>

    int main(){
        int maas;

        printf("Maasinizi giriniz:");
        scanf("%d",&maas);

        if(maas<=22000){
            printf("Artis talep edebilirsiniz.");
        }
        else if(maas>22000 && maas<=40000){
            printf("Ortalama bir maasiniz var siz bilirsiniz.");
        }
        else if(maas>40000 && maas<=75000){
            printf("Guzel bir maas Allah arttirsin");
        }
        else if(maas>75000){
            printf("Iyi para kanka Masallah.");
        }
        return 0;
    }