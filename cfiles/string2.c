#include <stdio.h>
#include <string.h>
void strCompare(int string1[], int string2[])
{
    strcmp(string1, string2);
    
}
void strCopy(int string1[], int string2[])
{
    strcpy(string1, string2);
}
void strLenght(int string[])
{
    strlen(string);
}
int main()
{
    int operand;
    char str1[] = {}, str2[] = {}, str3[] = {}, str4[] = {}, str5[] = {};
    printf("1 - For Comparison \n 2 - For Copy\n 3 - Lenght of the String\n");
    printf("enter the string operation\n");
    scanf("%d", &operand);
    if (operand == 1)
    {
        gets(str1);
        gets(str2);
        strCompare(str1, str2);
    }
    else if (operand == 2)
    {
        gets(str3);
        gets(str4);
        strCopy(str3, str4);
    }
    else if (operand == 3)
    {
        gets(str5);
        strLenght(str5);
    }
    
    
    return 0;
}
