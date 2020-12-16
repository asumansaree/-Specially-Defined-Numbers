//TALL NUMBER
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]; //Take integer as an char array so that you can examine it's terms easily
    int flag = 1;
    scanf("%[^\n]", str);  //scanning the whole string, including the white spaces
    for(int i=0,n=strlen(str); i<n-1; i++)
    {
        if(str[i] > str[i+1])
        {
            flag = 0; //If even once this condition satisfy our flag value will be 0 and loop will end
            break;
        }
    }
    (flag == 0) ? printf("false\n") : printf("true\n"); //If flag never be 0,then,our number is tall number
}
/*
Your program must output true if the given number n is a tall number or false if n is not a tall number.
A tall number is a number for which every digit is bigger or equal to the digit on its left.
Example: 123 is a tall number because:
3 >= 2
2 >= 1
*/

