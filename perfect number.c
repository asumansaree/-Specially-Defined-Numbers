#include <stdio.h>

//A perfect number is a number whose sum of all positive divisors except itself is equal to itself.
int main()
{
    int n,i,result=0;
    printf("Please enter a number: \n");
    scanf("%d",&n);
    
    for(i=1; i<n; i++)
    {
        if(n % i == 0)
            result = result + i;         
    }
    if(result == n)
        printf("this is a perfect number\n");
    else 
        printf("this is not a perfect number\n");
}

