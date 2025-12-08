#include <stdio.h>

    int main(){
        int k1,k2,k3;

        printf("Ucgeninizin kenarlarini giriniz:");
        scanf("%d %d %d",&k1,&k2,&k3);

        if(k1==k2 && k2==k3){
            printf("Ucgen eskenar");
        }
        else if(k1==k2 || k1==k3 || k2==k3){
            printf("Ucgen ikizkenar");
        }
        else{
            printf("Ucgen cesitkenar");
        }
        return 0;
    }