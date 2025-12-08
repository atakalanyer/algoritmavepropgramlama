#include <stdio.h>

int main(){
    int a, b, c, eb, ek;

    printf("3 tane sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    eb = a;
    if(b > eb) {
        eb = b;
    }    
    else if(c > eb){
         eb = c;
    }    
    ek = a;
    if(b < ek){
        ek = b;
    }    
    else if(c < ek){
        ek = c;
    }    

    printf("En buyuk: %d\n", eb);
    printf("En kucuk: %d\n", ek);
    
    return 0;
}