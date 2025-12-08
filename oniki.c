#include <stdio.h>

    int main(){
        int tekr=1,i,ele,sayac,maxtekr=1,ss;

        printf("Diziniz kac sayidan olussun:");
        scanf("%d",&ele);

        int dizi[ele];

        for(i=0;i<ele;i++){
            printf("%d. sayinizi giriniz:",i+1);
            scanf("%d",&dizi[i]);
        }

        for(i=0;i<ele-1;i++){
            if(dizi[i]==dizi[i+1]){
                tekr++;
            }
            else{
                if(tekr>maxtekr){
                    maxtekr=tekr;
                    ss=i-tekr+1;
                }
                tekr=1;
            }
            
            if(tekr>maxtekr){
                maxtekr=tekr;
                ss=ele-tekr;
            }
        }

        printf("Tekrarlayan sayi %d \n",dizi[ss]);
        printf("Uzunlugu: %d",maxtekr);

        return 0;
    }