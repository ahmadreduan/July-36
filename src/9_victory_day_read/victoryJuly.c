#include "../global.h"
void victoryJuly36()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          VICTORY AND 36 JULY \n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    char buffer[BUFFER_SIZE];

    FILE *file = fopen("../9_victory_day_read/txtFile_victory", "w");
    if (file == NULL)
    {
        printf(BRED"Error opening number 9.\n"RESET);
        return;
    }
    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}