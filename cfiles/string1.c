#include <stdio.h>
#include <string.h>
//defining a string function
void printStr(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c\t", str[i]);
        i ++;
    } printf("\n");
}
int main()
{
    char string[] = {};
    printf("Enter the string now\n");
    gets(string);
    printf("printing using functioncall\n");
    printStr(string);
    printf("Printing using puts\n");
    puts(string);
    return 0;
}
    
    
