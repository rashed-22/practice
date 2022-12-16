#include <stdio.h>

int main()
{

    FILE *inputFile;
    FILE *logFile;
    inputFile = fopen("input.txt", "r");
    logFile = fopen("output.txt", "a");

    if(inputFile == NULL)
    {
        fprintf(logFile, "File Not Found...!");
        return 0;
    }

    int y;
    fscanf(inputFile, "%d", &y);

    if(y % 4 == 0 && (y % 400 == 0 || y % 100 != 0))
        fprintf(logFile, "%d-->YES\n", y);

    else
        fprintf(logFile, "%d-->NO\n", y);


    fclose(inputFile);
    fclose(logFile);
    return 0;
}
