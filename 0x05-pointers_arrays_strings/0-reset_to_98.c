#include <stdio.h>
int main(void)
{
    int n;
    int *ip;

    n = 402;
    
    ip = &n; // initialize pointer with n       
    printf("n=%d\n", n);
    n = 98;
    printf("n=%d\n", n);
    return (0);
}
