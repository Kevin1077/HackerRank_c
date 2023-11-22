#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[100],sen[100];
scanf("%c", &ch);
printf("%c\n", ch);
scanf("%s",s);
printf("%s\n",s);
scanf("\n");
scanf("%[^\n]%*c", sen);
int i=0;
for(int i=0;i<strlen(sen);i++){
    printf("%c",sen[i]);
}

    return 0;
}
