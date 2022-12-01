#include <stdio.h>

int my_func(int n, int arr[], int k);

int main()
{
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    printf("%d\n", my_func(n, arr, k));
    return 0;
}

int my_func(int n, int arr[], int k)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > k || arr[i] < k)
        {
            count++;
        }
    }

    return count;
}

