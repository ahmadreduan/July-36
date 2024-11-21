#include "../global.h"
void finalMovement()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          FINAL MOVEMENT\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    char buffer[BUFFER_SIZE];

    FILE *file = fopen("../8_Final_movement_read/txtFile_FinalMovement.txt", "w");
    if (file == NULL)
    {
        printf(BRED"Error opening finalmovemnt.\n\n"RESET);
        return;
    }
    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}