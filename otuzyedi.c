#include <stdio.h>

    int main(){
        int num,sh;

        printf("Okul numaranizin son 2 hanesini giriniz:");
        scanf("%d",&num);

        sh=num%10;

        if(sh>=0 && sh<=2){
            printf("Sinaviniz pazartesi gunu.");
        }
        else if(sh>=3 && sh<=5){
            printf("Sinaviniz sali gunu");
        }
        else if(sh>=6 && sh<=7){
            printf("Sinaviniz carsamba gunu");
        }
        else if(sh>=8 && sh<=9){
            printf("Sinaviniz persembe gunu");
        }
        return 0;
    }