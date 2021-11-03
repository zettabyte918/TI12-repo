#include <stdio.h>


void main ()
{ 
  double som=1;
  double x=-1,i=3,x1,x2;
 
  // while(i<=499999){
  //   x1=1/i;
  //   x2=x1*x;
  //   som=som+x2;
  //   x=x*(-x);
  //   i=i+2;
  // }
  
  do {
 x1=1/i;
    x2=x1*x;
    som=som+x2;
    x=x*(-x);
    i=i+2;
  } while(i<499999);
// for(i=3;i<=499999;i=i+2){
//     x1=1/i;
//     x2=x1*x;
//     som=som+x2;
//     x=x*(-x);
    
// }
  printf("%f \n",som*4);
}