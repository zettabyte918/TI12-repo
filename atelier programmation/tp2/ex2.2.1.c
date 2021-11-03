#include <stdio.h>
void main(){
    int a,b;
    char c;

    printf("entrez un operateur: ");
    scanf("%c",&c);
    printf("entrez a et b = ");
    scanf("%d %d",&a,&b);
    

    switch (c)
    {
    case 43 :
        printf("a=b=%d \n",a+b);
        break;
    case 45:
        printf("a-b=%d \n",a-b);
        break; 
    case 42:
        printf("a*b=%d \n",a*b);
        break;         
    case 47:
        printf("a/b=%d \n",a/b);
        break;  
    default:
        break;
    }
}