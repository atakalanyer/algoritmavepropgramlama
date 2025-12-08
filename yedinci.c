#include <stdio.h>

int main(){
    int sayi1;

    printf("Katlarini gormek istediginiz rakaminizi giriniz:");
    scanf("%d",&sayi1);

    switch(sayi1){
        case 0:
            printf("Her kati 0 dir.");
            break;

        case 1:
            printf("1 2 3 4 5 6 7 8 9");
            break;

        case 2:
            printf("2 4 6 8 10 12 14 16 18");
            break;

        case 3:
            printf("3 6 9 12 15 18 21 24 27");
            break;

        case 4:
            printf("4 8 12 16 20 24 28 32 36");
            break;

        case 5:
            printf("5 10 15 20 25 30 35 40 45");
            break;

        case 6:
            printf("6 12 18 24 30 36 42 48 54");
            break;

        case 7:
            printf("7 14 21 28 35 42 49 56 63");
            break;

        case 8:
            printf("8 16 24 32 40 48 56 64 72");
            break;

        case 9:
            printf("9 18 27 36 45 54 63 72 81");
            break;

        default:
            printf("Rakam girmediniz");
    }
    return 0;
}