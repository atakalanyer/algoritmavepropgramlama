#include <stdio.h>

    int main(){
        int sayi1,sayi2,sonuc;
        char islem;

        printf("Ilk sayinizi giriniz:");
        scanf("%d",&sayi1);

        printf("Ikinci sayinizi giriniz:");
        scanf("%d",&sayi2);

        printf("Yapmak istediginiz islemi giriniz(+,-,/,*):");
        scanf(" %c",&islem);

        switch(islem){
            case '+':
                sonuc = sayi1 + sayi2;
                printf("%d", sonuc);
                break;

            case '-':
                sonuc = sayi1 - sayi2;
                printf("%d", sonuc);
                break;

            case '/':
                sonuc = sayi1 / sayi2;
                printf("%d", sonuc);
                break;

                case '*':
                sonuc = sayi1 * sayi2;
                printf("%d", sonuc);
                break;

            default:
                printf("Gecersiz islem.");

        }
        return 0;
    }