#include <stdio.h>
int main(void) 
{	
    char s[100];
    scanf("%[^\n]%s",s);
    printf("Hello, World!\n");
    printf(s);    
    return 0;
}