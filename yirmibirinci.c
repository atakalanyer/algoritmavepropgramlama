#include <stdio.h>

    int main(){
        int uc=0,bes=0,sayi;

        printf("son sayiyi gir:");
        scanf("%d",&sayi);

        for(sayi;sayi>=1;sayi--){
            if(sayi%3==0){
                uc++;
            }
            if(sayi%5==0){
                bes++;
            }
        }
        printf("3e bolunen sayisi %d 5e bolunen sayisi %d",uc,bes);
        return 0;

    }