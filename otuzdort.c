#include <stdio.h>

    int main(){
        int disk,a,b,c;

        printf("Diskriminantini bulacagimiz denklemin katsayilarini yaziniz (ax^2+bx+c)\n");
        scanf("%d %d %d",&a,&b,&c);

        disk=(b*b)-(4*a*c);

        if(disk<0){
            printf("Reel kok yoktur.");
        }
        else if(disk==0){
            printf("Cift katli kok.");
        }
        else if(disk>0){
            printf("Iki farkli koku vardir.");
        }
        return 0;
    }