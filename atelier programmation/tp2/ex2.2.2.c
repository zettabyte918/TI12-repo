#include <stdio.h>
void main(){
   int x;
   printf("entrez un chiffre entre 1 et 7: ");
   scanf("%d",&x);
   switch (x)
   {
   case 1:  
       printf("Violet \n");
       break;
    case 2:  
       printf("Indigo \n");
       break;
    case 3:  
       printf("Bleu \n");
       break; 
    case 4:  
       printf("Vert \n");
       break;
    case 5:  
       printf("Jaune \n");
       break;
    case 6:  
       printf("Orange \n");
       break;
    case 7:  
       printf("Rouge \n");
       break;             

   
   default:
       break;
   } 
}