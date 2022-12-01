#include <stdio.h>

void check_power(int n)
{
    int flag = 1, cost = 0;

    while(n != 1)
    {
        int rem = n % 2;
        cost++;
        n /= 2;

        if(rem != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Yes\n");
        printf("cost = 2^%d\n", cost);
    }
    else
    {
        printf("No\n");
    }
}

int main()
{
    char str[100];
    scanf("%s", str);

    int i, len = strlen(str), sum = 0;
    for(i = 0; i < len; i++)
    {
        sum += str[i] - 'a' + 1;
    }

    check_power(sum);
    return 0;
}
