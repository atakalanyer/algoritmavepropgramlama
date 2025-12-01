#include <stdio.h>

int main(){
    int sayi1;

    printf("2\n3\n5\n7\n");
    for(sayi1=2;sayi1<101;sayi1++){
        if(sayi1%2!=0 && sayi1%3!=0 && sayi1%5!=0 && sayi1%7!=0 ){
            printf("%d\n",sayi1);
        }
    }
    return 0;
}