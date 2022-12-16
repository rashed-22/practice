#include <stdio.h>

int square(int base, int p)
{
    if(p == 0) return 1;
    return base * square(base, p-1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d^%d = %d\n", n, m, square(n, m));
    return 0;
}
