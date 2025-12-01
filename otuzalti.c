#include <stdio.h>

int main() {
    int gun, ay;

    printf("Dogum gununuzu giriniz:");
    scanf("%d", &gun);

    printf("Dogdugunuz ayi giriniz (1-12):");
    scanf("%d", &ay);

    if ((ay == 3  && gun >= 21) || (ay == 4 && gun <= 20))
        printf("Burcunuz: Koc");

    else if ((ay == 4 && gun >= 21) || (ay == 5 && gun <= 20))
        printf("Burcunuz: Boga");

    else if ((ay == 5 && gun >= 21) || (ay == 6 && gun <= 21))
        printf("Burcunuz: Ikizler");

    else if ((ay == 6 && gun >= 22) || (ay == 7 && gun <= 22))
        printf("Burcunuz: Yengec");

    else if ((ay == 7 && gun >= 23) || (ay == 8 && gun <= 22))
        printf("Burcunuz: Aslan");

    else if ((ay == 8 && gun >= 23) || (ay == 9 && gun <= 22))
        printf("Burcunuz: Basak");

    else if ((ay == 9 && gun >= 23) || (ay == 10 && gun <= 22))
        printf("Burcunuz: Terazi");

    else if ((ay == 10 && gun >= 23) || (ay == 11 && gun <= 21))
        printf("Burcunuz: Akrep");

    else if ((ay == 11 && gun >= 22) || (ay == 12 && gun <= 21))
        printf("Burcunuz: Yay");

    else if ((ay == 12 && gun >= 22) || (ay == 1 && gun <= 20))
        printf("Burcunuz: Oglak");

    else if ((ay == 1 && gun >= 21) || (ay == 2 && gun <= 19))
        printf("Burcunuz: Kova");

    else if ((ay == 2 && gun >= 20) || (ay == 3 && gun <= 20))
        printf("Burcunuz: Balik");

    else
        printf("Yanlis tuslama yaptiniz.");

    return 0;
}
