#include <stdio.h>

    int main(){
        char isim[5];
        int i;

        printf("5 harfli bir kelime giriniz:");
        scanf("%s",&isim);

       for(i=4;i>=0;i--){
        printf("%c",isim[i]);
       }
       return 0;
    }