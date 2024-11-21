#include "../global.h"
void viewleaders()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          VIEW LEADERS\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);

    char buffer[BUFFER_SIZE];

    FILE *file = fopen("2_leader_function/addleader.txt", "r");
    if (file == NULL)
    {
        printf(BRED "Error opening initial movement.\n" RESET);
        return;
    }

    while (fgets(buffer, BUFFER_SIZE, file))
    {
        printf("%s", buffer);
    }
    fclose(file);
}
