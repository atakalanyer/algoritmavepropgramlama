#include <stdio.h>
int main(){
    int f,fak=1;

    printf("Faktoriyelini almak istediginiz rakami giriniz:");
    sayialici:
    scanf("%d",&f);

    if(f==0){
        printf("Faktoriyeli 1'dir");
    }

    else if(f>9 || f<1){
        printf("Bir rakam girmediniz tekrar giriniz:");
        goto sayialici;
    }

    else
    for(f;f>1;f--){
        fak*=f;
    }

    printf("%d",fak);
    return 0;
}