#include <stdio.h>

int main(){
    int a=20, b=11, c=10;
    int max;
    if (a > b)
    {
        if (a > c)
        {
            printf("A is greates number: %d", a);
        }
        else{
            printf("C is greates number: %d", c);
        }
    
    }
    else if (b > c)
    {
        printf("B is greates Number: %d", b);
    }
    else{
        printf("C is the greates Number: %c", c);
    }
    
    max = a>b? a>c?a:c : b>c?b:c;
    
    printf("\nMax is greates: %d", max);
    
}