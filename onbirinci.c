#include <stdio.h>

    int main(){
        int toplam=0,sayi1,sayi2;

        for(sayi1=1;sayi1<=10;sayi1++){
            printf("%d. sayiyi gir:",sayi1);
            scanf("%d",&sayi2);

            if(sayi2>=0){
                toplam+=sayi2;
            }
            else{
                toplam-=sayi2;
            }
        }
        printf("Toplaminiz:%d",toplam);
        
        return 0;
    }