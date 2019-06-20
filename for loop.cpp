#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b,i;
    char s[9][6]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        if(i>0 && i<=9)
         printf("%s\n",s[i-1]);
        else if(i>9)
        {
            if(i%2==0)
             printf("even\n");
            else 
            printf("odd\n"); 
        } 
    }
	return 0;
}
  	
