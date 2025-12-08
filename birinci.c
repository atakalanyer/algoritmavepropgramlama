  #include <stdio.h>

int main(){
    float uniort,matvize,matfinal,algvize,algfinal,donvize,donfinal,osvize,osfinal,agvize,agfinal,matdersort,algdersort,dondersort,osdersort,agdersort,algort,matort,donort,osort,agort,AA=4.0, BA=3.5, BB=3.0, CB=2.5, CC=2.0, DC=1.5, DD=1.0, FF=0.0;
    char ders;

    baslangic:

    printf("\nNotlarinizi gireceginiz dersi seciniz\n Matematik-m\nDonanim-d\nAlgoritma ve programlama-p\nIsletim Sistemleri-i\nAg sistemleri-a\n");
    scanf(" %c",&ders);

    switch(ders){

        case 'm':
        
        printf("Vizeden aldiginiz notu giriniz:");
        scanf("%f",&matvize);

        printf("Finalden aldiginiz notu giriniz:");
        scanf("%f",&matfinal);

        matdersort=(matvize*(4.0/10.0))+(matfinal*(6.0/10.0));

        if(matdersort>=90){
            printf("Harf notunuz AA ve ders ortalamaniz:%0.2f",matdersort);
            matort=AA*3;
        }

        else if(matdersort>=85 && matdersort<90){
            printf("Harf notunuz BA ve ders ortalamaniz:%0.2f",matdersort);
            matort=BA*3;
        }

        else if(matdersort>=80 && matdersort<85){
            printf("Harf notunuz BB ve ders ortalamaniz:%0.2f",matdersort);
            matort=BB*3;
        }

        else if(matdersort>=75 && matdersort<80){
            printf("Harf notunuz CB ve ders ortalamaniz:%0.2f",matdersort);
            matort=CB*3;
        }

        else if(matdersort>=70 && matdersort<75){
            printf("Ders notunuz CC ve ders ortalamaniz:%0.2f",matdersort);
            matort=CC*3;
        }

        else if(matdersort>=65 && matdersort<70){
            printf("Ders notunuz DC ve ders ortalamaniz:%0.2f",matdersort);
            matort=DC*3;
        }

        else if(matdersort>=60 && matdersort<65){
            printf("Ders notunuz DD ve ders ortalamaniz:%0.2f",matdersort);
            matort=DD*3;
        }
        
        else{
            printf("Harf ortalamaniz FF ve ders ortalamaniz:%0.2f\n",matdersort);
            printf("Dersten kaldiniz.");
            matort=FF*3;
        }
        goto baslangic;
        break;



        case 'p':

        printf("Vizeden aldiginiz notu giriniz:");
        scanf("%f",&algvize);

        printf("Finalden aldiginiz notu giriniz:");
        scanf("%f",&algfinal);

        algdersort=(algvize*(4.0/10.0))+(algfinal*(6.0/10.0));

        if(algdersort>=90){
            printf("Harf notunuz AA ve ders ortalamaniz:%0.2f",algdersort);
            algort=AA*3;
        }

        else if(algdersort>=85 && algdersort<90){
            printf("Harf notunuz BA ve ders ortalamaniz:%0.2f",algdersort);
            algort=BA*2;
        }

        else if(algdersort>=80 && algdersort<85){
            printf("Harf notunuz BB ve ders ortalamaniz:%0.2f",algdersort);
            algort=BB*2;
        }

        else if(algdersort>=75 && algdersort<80){
            printf("Harf notunuz CB ve ders ortalamaniz:%0.2f",algdersort);
            algort=CB*2;
        }

        else if(algdersort>=70 && algdersort<75){
            printf("Ders notunuz CC ve ders ortalamaniz:%0.2f",algdersort);
            algort=CC*2;
        }

        else if(algdersort>=65 && algdersort<70){
            printf("Ders notunuz DC ve ders ortalamaniz:%0.2f",algdersort);
            algort=DC*2;
        }

        else if(algdersort>=60 && algdersort<65){
            printf("Ders notunuz DD ve ders ortalamaniz:%0.2f",algdersort);
            algort=DD*2;
        }
        
        else{
            printf("Harf ortalamaniz FF ve ders ortalamaniz:%0.2f\n",algdersort);
            printf("Dersten kaldiniz.");
            algort=FF*2;
        }
        goto baslangic;
        break;



        case 'd':

        printf("Vizeden aldiginiz notu giriniz:");
        scanf("%f",&donvize);

        printf("Finalden aldiginiz notu giriniz:");
        scanf("%f",&donfinal);

        dondersort=(donvize*(4.0/10.0))+(donfinal*(6.0/10.0));

        if(dondersort>=90){
            printf("Harf notunuz AA ve ders ortalamaniz:%0.2f",dondersort);
            donort=AA*3;
        }

        else if(dondersort>=85 && dondersort<90){
            printf("Harf notunuz BA ve ders ortalamaniz:%0.2f",dondersort);
            donort=BA*3;
        }

        else if(dondersort>=80 && dondersort<85){
            printf("Harf notunuz BB ve ders ortalamaniz:%0.2f",dondersort);
            donort=BB*3;
        }

        else if(dondersort>=75 && dondersort<80){
            printf("Harf notunuz CB ve ders ortalamaniz:%0.2f",dondersort);
            donort=CB*3;
        }

        else if(dondersort>=70 && dondersort<75){
            printf("Ders notunuz CC ve ders ortalamaniz:%0.2f",dondersort);
            donort=CC*3;
        }

        else if(dondersort>=65 && dondersort<70){
            printf("Ders notunuz DC ve ders ortalamaniz:%0.2f",dondersort);
            donort=DC*3;
        }

        else if(dondersort>=60 && dondersort<65){
            printf("Ders notunuz DD ve ders ortalamaniz:%0.2f",dondersort);
            donort=DD*3;
        }
        
        else{
            printf("Harf ortalamaniz FF ve ders ortalamaniz:%0.2f\n",dondersort);
            printf("Dersten kaldiniz.");
            donort=FF*3;
        }
        goto baslangic;
        break;



        case 'a':

        printf("Vizeden aldiginiz notu giriniz:");
        scanf("%f",&agvize);

        printf("Finalden aldiginiz notu giriniz:");
        scanf("%f",&agfinal);

        agdersort=(agvize*(4.0/10.0))+(agfinal*(6.0/10.0));
    
        if(agdersort>=90){
            printf("Harf notunuz AA ve ders ortalamaniz:%0.2f",agdersort);
            agort=AA*2;
        }

        else if(agdersort>=85 && agdersort<90){
            printf("Harf notunuz BA ve ders ortalamaniz:%0.2f",agdersort);
            agort=BA*2;
        }

        else if(agdersort>=80 && agdersort<85){
            printf("Harf notunuz BB ve ders ortalamaniz:%0.2f",agdersort);
            agort=BB*2;
        }

        else if(agdersort>=75 && agdersort<80){
            printf("Harf notunuz CB ve ders ortalamaniz:%0.2f",agdersort);
            agort=CB*2;
        }

        else if(agdersort>=70 && agdersort<75){
            printf("Ders notunuz CC ve ders ortalamaniz:%0.2f",agdersort);
            agort=CC*2;
        }

        else if(agdersort>=65 && agdersort<70){
            printf("Ders notunuz DC ve ders ortalamaniz:%0.2f",agdersort);
            agort=DC*2;
        }

        else if(agdersort>=60 && agdersort<65){
            printf("Ders notunuz DD ve ders ortalamaniz:%0.2f",agdersort);
            agort=DD*2;
        }
        
        else{
            printf("Harf ortalamaniz FF ve ders ortalamaniz:%0.2f\n",agdersort);
            printf("Dersten kaldiniz.");
            agort=FF*2;
        }
        goto baslangic;
        break;



        case 'i':

        printf("Vizeden aldiginiz notu giriniz:");
        scanf("%f",&osvize);

        printf("Finalden aldiginiz notu giriniz:");
        scanf("%f",&osfinal);

        osdersort=(osvize*(4.0/10.0))+(osfinal*(6.0/10.0));

        if(osdersort>=90){
            printf("Harf notunuz AA ve ders ortalamaniz:%0.2f",osdersort);
            osort=AA*2;
        }

        else if(osdersort>=85 && osdersort<90){
            printf("Harf notunuz BA ve ders ortalamaniz:%0.2f",osdersort);
            osort=BA*2;
        }

        else if(osdersort>=80 && osdersort<85){
            printf("Harf notunuz BB ve ders ortalamaniz:%0.2f",osdersort);
            osort=BB*2;
        }

        else if(osdersort>=75 && osdersort<80){
            printf("Harf notunuz CB ve ders ortalamaniz:%0.2f",osdersort);
            osort=CB*2;
        }

        else if(osdersort>=70 && osdersort<75){
            printf("Ders notunuz CC ve ders ortalamaniz:%0.2f",osdersort);
            osort=CC*2;
        }

        else if(osdersort>=65 && osdersort<70){
            printf("Ders notunuz DC ve ders ortalamaniz:%0.2f",osdersort);
            osort=DC*2;
        }

        else if(osdersort>=60 && osdersort<65){
            printf("Ders notunuz DD ve ders ortalamaniz:%0.2f",osdersort);
            osort=DD*2;
        }
        
        else{
            printf("Harf ortalamaniz FF ve ders ortalamaniz:%0.2f\n",osdersort);
            printf("Dersten kaldiniz.");
            osort=FF*2;
        }
        goto baslangic;
        break;

        default:
        uniort=(osort+agort+algort+matort+donort)/12;
        printf("Universite ortalamaniz:%.2f", uniort);

    }

    return 0;
}