#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char source_file[100], target_file[100];

    // Get the source and target file name from the command line arguments
    strcpy(source_file, argv[1]);
    strcpy(target_file, argv[2]);

    // Create a FILE pointer
    FILE *fs, *ft;

    // Open source and target files in read mode
    fs = fopen(source_file, "r");
    ft = fopen(target_file, "w");

    // Check if source file exist
    if(fs == NULL)
    {
        printf("\nUnable to open source file.\n");
        printf("Please check if file exists and you have read permission.\n");

        // Close the opened files
        fclose(fs);
        fclose(ft);

        return 0;
    }

    // Check if target file exist
    if(ft == NULL)
    {
        printf("\nUnable to open target file.\n");
        printf("Please check if you have write permission.\n");

        // Close the opened files
        fclose(fs);
        fclose(ft);

        return 0;
    }

    // Read source file and write to target file
    char ch;
    while((ch = fgetc(fs)) != EOF)
        fputc(ch, ft);

    printf("\nFile copied successfully.\n");

    // Close the opened files
    fclose(fs);
    fclose(ft);

    return 0;
}