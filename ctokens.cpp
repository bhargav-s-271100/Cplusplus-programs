#include <stdio.h>
#include<conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i=0;
    char *s;
    s=(char*)malloc(1024*sizeof(char));
    gets(s);
    while(s[i]!='0')
    {
        if(s[i]==' ')
         s[i]='\n';
        i++; 
    }
    puts(s);
    return 0;
}


