#include "../global.h"
void participants()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          WHO PARTICIPATE IN MOVEMENT\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    char buffer[BUFFER_SIZE];

    FILE *file = fopen("3_participate_read/txtFile_participate.txt", "r");
    if (file == NULL)
    {
        printf(BRED"Error opening participatns.\n"RESET);
        return;
    }
    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}