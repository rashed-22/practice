#include <stdio.h>

int main()
{
    int *a, *b, *c, n1, n2, n3, sum;
    scanf("%d %d %d", &n1, &n2, &n3);

    a = &n1;
    b = &n2;
    c = &n3;
    sum = *a + *b + *c;

    printf("%d\n", sum);
    return 0;
}
