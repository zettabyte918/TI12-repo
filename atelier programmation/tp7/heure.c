#include <stdio.h>

int minute(int a,int b){
    return a*60+b;
}

int heure(int a,int b){
    return a+(b/60);
}

void AjouteTemps(int a,int b, int c, int d){
    int h,m;
    h=heure(a+c,b+d);
    m=minute(a+c,b+d);
    printf("heure=%d minute=%d \n",h,m);

}

void main(){
    int s,m,h,hh,mm;
    printf("entrez heure:minute ");
    scanf("%d:%d",&h,&m);
    printf("le nombre de minute est=%d \n",minute(h,m));
    printf("le nombre de heure est=%d \n",heure(h,m));
    printf("entrez heure:minute ");
    scanf("%d:%d",&hh,&mm);
    AjouteTemps(h,m,hh,mm);
}