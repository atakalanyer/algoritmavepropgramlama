#include <stdio.h>

    int main(){
        int s=21,t;
       
        do{
        printf("Bir sayi giriniz:");
        scanf("%d",&t);

            if(s<t){
                printf("Tahmininiz buyuk.\n");
            }
            else if(s>t){
                printf("Tahmininiz kucuk.\n");
            }
        }
        while(s!=t);
        printf("Tahmininiz dogru.");
        return 0;
    }