#include <stdio.h>

int sum(int arr[], int n)
{
    if(n == 0) return 0;

    int x = arr[n-1] % 10;
    int y = sum(arr, n-1);

    return x + y;
}

int main()
{
    int n;
    scanf("%d", &n);

    int i, arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", sum(arr, n));
    return 0;
}
