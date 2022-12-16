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

    int t, i;
    fscanf(inputFile, "%d", &t);

    while(t--)
    {
        int n;
        fscanf(inputFile, "%d", &n);

        if(n > 0)
        {
            for(i = n; i >= -n; i--)
            {
                fprintf(outputFile, "%d ", i);
            }
        }
        else
        {
            for(i = n; i <= -n; i++)
            {
                fprintf(outputFile, "%d ", i);
            }
        }

        fprintf(outputFile, "\n");
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
