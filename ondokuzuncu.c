#include <stdio.h>

    int main(){
        int a,sayi,ttop=0,ctop=0;

        for(a=1;a<=10;a++){
            printf("%d. sayiyi giriniz: ",a);
            scanf("%d",&sayi);

            if(sayi%2==0){
                ctop+=sayi;
            }
            else{
                ttop+=sayi;
            }
        }
        printf("Cift sayilarin toplami:%d\n",ctop);
        printf("Tek sayilarin toplami:%d",ttop);
        return 0;
    }