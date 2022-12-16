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

    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            fprintf(outputFile, " ");
        }

        for(j = 0; j < n; j++) {
            fprintf(outputFile, "#");
        }
        fprintf(outputFile, "\n");
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
