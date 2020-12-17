//A composite number is a positive integer that can be formed by multiplying two smaller positive integers.
#include <stdio.h>
int main()
{
    int n,i,j,result1,result2,flag;
    printf("Please enter a number: \n");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        flag = 0;
        for(j=1; j<n; j++)
        {          
            result1 = i / j;
            result2 = i % j;
            if(result1 > 0 && result1 != 1 && result1 != i && result2 == 0) 
                flag = 1;  
        }
        if(flag == 1)
            printf("%d is composite\n",i);
    }
    
    
}

