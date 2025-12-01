#include <stdio.h>

    int main(){
        int yatir,cek,islem,hesap=0;

        do{
        printf("Yapmak istediginiz islemi seciniz\n");
        printf("1-Para Yatirma\n");
        printf("2-Para Cekme\n");
        printf("3-Bakiye Sorgula\n");
        printf("4-Cikis\n");
        
        scanf("%d",&islem);
        switch(islem){
            case 1:
                printf("Yatirmak istediginiz para miktarini giriniz:");
                scanf("%d",&yatir);
                hesap+=yatir;
                break;
            
            case 2:
                printf("Cekmek istediginiz para miktarini giriniz:");
                scanf("%d",&cek);
                if(hesap<cek){
                    printf("Hesapta yeteri kadar para yok.\n");
                }
                else
                hesap-=cek;
                break;
            
            case 3:
                printf("Guncel bakiyeniz:%d\n",hesap);
                break;

            case 4:
                printf("Cikis yapiliyor.");
                break;

            default:
                printf("Gecerli bir islem numarasi girmediniz");
        }
    } while(islem!=4);
        return 0;
}