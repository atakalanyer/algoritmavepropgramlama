#include <stdio.h>

    int main(){
        int sayi1;

        do{
            printf("Bir sayi giriniz 0 girene kadar tek cift bulma islemi devam edecektir:");
            scanf("%d",&sayi1);

            if(sayi1%2==0){
                printf("Sayiniz cifttir.\n");
            }
            else{
                printf("Sayiniz tektir.\n");
            }
        }
        while(sayi1!=0);
        return 0;
    }