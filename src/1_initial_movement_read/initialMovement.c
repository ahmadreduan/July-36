#include "../global.h"
void initialMovement()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          INITIAL MOVEMENT\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    
    char buffer[BUFFER_SIZE];

    FILE *file = fopen("../1_initial_movement_read/txtFile_initial_Movement.txt", "r");
    if (file == NULL)
    {
        printf(BRED"Error opening initial movement.\n"RESET);
        return;
    }

    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}
