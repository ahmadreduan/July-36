#include"../global.h"

void writeHistoricalStory()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          HISTORICAL STORY\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    char story[2000];

    printf("\nWrite a Historical Story or Memory:\n");
    printf("Enter story (up to 2000 characters): ");
    fgets(story, sizeof(story), stdin);

    // Remove newline character from input, if it exists
    story[strcspn(story, "\n")] = '\0';

    // Write story to file
    FILE *file = fopen("../Historical_Story/HistoricalStory.txt", "a");
    if (file == NULL)
    {
        printf(BRED"Error opening file for writing.\n"RESET);
        return;
    }
    fprintf(file, "Story: %s\n", story); // Adding a newline for better formatting in the file
    fclose(file);

    printf("\nHistorical story recorded successfully.\n");

    // Read and display story from file
    file = fopen("../Historical_Story/HistoricalStory.txt", "r");
    if (file == NULL)
    {
        perror(BRED"Error opening file for reading.\n"RESET);
        return;
    }
    printf("\nRecorded Story:\n");
    while (fgets(story, sizeof(story), file))
    {
        printf("%s", story); // Prints each line read from the file
    }
    fclose(file);
}
