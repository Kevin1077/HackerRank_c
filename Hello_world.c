#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("Hello, World!\n");
    int i;
    for(i=0;i<strlen(s);i++) 
    printf("%c",s[i]) ;
    return 0;
}
