#include <stdio.h>

int main(){
    int sayi,ters=0,kalan;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    printf("Orijinal sayi: %d\n", sayi);
    
    while(sayi != 0){
        kalan = sayi % 10;        
        ters = ters * 10 + kalan; 
        sayi = sayi / 10;         
    }
    
    printf("Ters cevrilmis hali: %d\n", ters);
    
    return 0;
}
