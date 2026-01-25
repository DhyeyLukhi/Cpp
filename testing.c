#include <stdio.h>
#include <string.h>

int main(){

    char p[20];
    char *s = "string";
    int leng = strlen(s);
    for (int i = 0; i < leng; i++)
    {
        p[i] = s[leng - i];
    }
    printf("%s", p);
    
}