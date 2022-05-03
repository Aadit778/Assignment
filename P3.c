#include <stdio.h>

int isEven(int x)
{
    return !(x & 1);
}


int main()
{
    int x;
    
    
    printf("Enter any number: ");
    scanf("%d", &x);
    

    if(isEven(x))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}