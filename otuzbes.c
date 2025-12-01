#include <stdio.h>

#define PI 3

    int main(){
        int taban,k1,k2,h,tur,yaricap,alan;

        printf("Geometrik seklinizin turunu seciniz: 1=Kare 2=Dikdortgen 3=Ucgen 4=Daire");
        scanf("%d",&tur);

        switch(tur){
            case 1:
                printf("Karenin alanini bulmak icin bir kenar yeterli giriniz:");
                scanf("%d",&k1);
                alan=k1*k1;
                printf("alan:%d",alan);
                break;

            case 2:
                printf("Dikdortgen alani icin kisa ve uzun kenari bosluklu giriniz:");
                scanf("%d %d",&k1,&k2);
                alan=k1*k2;
                printf("alan:%d",alan);
                break;

            case 3:
                printf("Ucgen alani icin taban ve yukseklik gerekli bosluklu giriniz:");
                scanf("%d %d",&taban,&h);
                alan=(taban*h)/2;
                printf("alan:%d",alan);
                break;

            case 4:
                printf("Daire alani icin yaricap yeterli giriniz:");
                scanf("%d",&yaricap);
                alan=PI*(yaricap*yaricap);
                printf("alan:%d",alan);
                break;

            default:
                printf("Dogru islem numarasi girmediniz.");
                
        }
        return 0;
    }