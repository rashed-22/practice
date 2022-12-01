#include <stdio.h>

int reverse(int n)
{
    if(n >= 1)
    {
        printf("%d ", n);
        reverse(n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    reverse(n);
    return 0;
}
