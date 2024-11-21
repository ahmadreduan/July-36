#include "../global.h"
void displayHeading()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          History of the July 36, 2024 Student Movement\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);

    char buffer[BUFFER_SIZE];
    FILE *file = fopen("Display_Read_Heading/txtFile_HeadingHistory.txt", "r");
    if (file == NULL)
    {
        printf(BRED"Error opening heading file.\n"RESET);
        return ;
    }

    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}
