#include <stdio.h>

void sort(int n, int arr[]);
void largest(int n, int arr[], int k);
void smallest(int n, int arr[], int k);

int main()
{
    int n;
    scanf("%d", &n);

    int i, arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    sort(n, arr);
    largest(n, arr, k);
    smallest(n, arr, k);
    return 0;
}

//Bubble sort
void sort(int n, int *p)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

//Find k-th largest element in the array
void largest(int n, int arr[], int k)
{
    int i, count = 0;
    for(i = n; i > 0; i--)
    {
        count++;
        if(count == k)
        {
            printf("%dth largest element = %d\n", k, arr[i]);
            break;
        }
    }
}

//Find k-th smallest element in the array
void smallest(int n, int arr[], int k)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        count++;
        if(count == k)
        {
            printf("%dth smallest element = %d\n", k, arr[i]);
            break;
        }
    }
}
