#include <stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        fprintf(outputFile, "File Not Found...!\n");
        return 0;
    }

    int i, arr[6];
    for(i = 1; i <= 5; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
    }

    for(i = 1; i <= 5; i++)
    {
        fprintf(outputFile, "%d ", arr[i]);
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
