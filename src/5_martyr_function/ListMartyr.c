#include "../global.h"

void ListMartyrs()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          MARTYERS LIST\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    
    char buffer[BUFFER_SIZE];

    FILE *file = fopen("5_martyr_function/addMartyr.txt", "r");
    if (file == NULL)
    {
        printf(BRED"Error opening list martyrs\n"RESET);
        return;
    }

    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}
