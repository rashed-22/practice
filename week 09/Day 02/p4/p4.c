#include <stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        fprintf(outputFile, "File Not Found...!");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);

    int i, arr[n];
    for(i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
    }

    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += arr[i] % 10;
    }

    fprintf(outputFile, "Sum = %d\n", sum);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
