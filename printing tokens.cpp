#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   char ch,*s,*sen;
   s=(char*)malloc(2500*sizeof(char));
   sen=(char*)malloc(20000*sizeof(char));
   scanf("%c",&ch);
   scanf("%s",s);
   scanf("%[^ ]",sen);
   scanf("\n");
   printf("%c",ch);
   printf("\n%s",s);
   printf("%s",sen);   
    return 0;
}

