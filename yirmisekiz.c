#include <stdio.h>

    int main(){
        int vize,final;
        float odev,ort;

    vize:
        printf("Aldigin vize notunu gir:");
        scanf("%d",&vize);

        if(vize>100 || vize<0){
            printf("Gecerli bir not girmediniz.");
            goto vize;
        }

    final:
        printf("Aldigin final notunu gir:");
        scanf("%d",&final);

        if(final>100 || final<0){
            printf("Gecerli bir not girmediniz.");
            goto final; 
        }

    odev:
        printf("Odevlere katilim oranini gir:");
        scanf("%f",&odev);

        /*if(odev<0 || odev>1){
            printf("Gecerli bir oran girmediniz");
            goto odev;
        }*/

        ort=(vize*(3/10))+(final*(5/10))+(odev*(2/10));

        if(ort>=50){
            printf("Gectiniz.");
        }
        else{
            printf("Kaldiniz.");
        }
        return 0;
    }