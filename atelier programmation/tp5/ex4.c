#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char ch1[50];
    char ch2[50];

    printf("Entrez ch1: ");
    gets(ch1);
    printf("Entrez ch2: ");
    gets(ch2);

    if(strcmp(ch1,ch2) == 1){
        strcat(ch2,ch1);
        puts(ch2);
    } else {
        strcat(ch1,ch2);
        puts(ch1);
    }

}