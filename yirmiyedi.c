#include <stdio.h>

    int main(){
        int derece;

        printf("Bugunun hava sicakligini giriniz:");
        scanf("%d",&derece);

        if(derece<=0){
            printf("Hava cok soguk mont giymeden cikmayiniz.");
        }
        else if(derece>0 && derece <=15){
            printf("Hava soguk dikkat ediniz.");
        }
        else if(derece>15 && derece<23){
            printf("Hava ilik hirka tercih edebilirsiniz.");
        }
        else if(derece>=23){
            printf("Hava sicak");
        }
        return 0;
    }