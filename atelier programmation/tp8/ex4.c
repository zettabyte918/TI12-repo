#include <stdio.h>
#include <string.h>

int palindrome(char ch[],int start, int end){
   if(start>end/2) return 1;
   else if(ch[start]==ch[end]) return palindrome(ch,start+1,end-1);
   else return 0;
}

void main(){
    char ch[]="aziza";
    palindrome(ch,0,strlen(ch)-1) 
        ? printf("%s est palindrome\n",ch)
        : printf("%s n'est pas un palindrome\n",ch); 
}