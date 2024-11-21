#include "../global.h"

void addLeader()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          ADD LEADER\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    FILE *file = fopen("2_leader_function/addleader.txt", "a"); // Open file in append mode

    if (file == NULL)
    {
        printf(BRED "Error opening file for writing.\n" RESET);
        return;
    }
    loadLeaderCount();

    if (leader_count < MAX_LEADERS)
    {
        printf("\nLeader profile %d\n", leader_count + 1);
        printf("-----------------------\n");
        fprintf(file, "Leader profile %d\n-----------------------\n", leader_count + 1);

        printf("\nEnter leader name: ");
        getchar(); // Clear any leftover newline character
        fgets(leaders[leader_count].name, MAX_NAME_LENGTH, stdin);

        leaders[leader_count].name[strcspn(leaders[leader_count].name, "\n")] = '\0'; // Remove newline
        fprintf(file, "Leader name: %s\n", leaders[leader_count].name);

        printf("Enter role: ");
        fgets(leaders[leader_count].role, MAX_NAME_LENGTH, stdin);
        leaders[leader_count].role[strcspn(leaders[leader_count].role, "\n")] = '\0'; // Remove newline
        fprintf(file, "Role: %s\n", leaders[leader_count].role);

        printf("Enter contribution: ");
        fgets(leaders[leader_count].contribute, MAX_CONTRIBUTE_LENGTH, stdin);
        leaders[leader_count].contribute[strcspn(leaders[leader_count].contribute, "\n")] = '\0'; // Remove newline
        fprintf(file, "Contribution: %s\n\n", leaders[leader_count].contribute);

        leader_count++; // Increment leader count
        printf(BWHT"\nLeader added successfully.\n\n"RESET);

        flag = 1; // Set flag to save leader count
        saveLeaderCount();
    }
    else
    {
        printf(BYEL "Maximum number of leaders reached.\n" RESET);
    }

    fclose(file); // Close the file
}

// Function to load leader count from a file
void loadLeaderCount()
{
    FILE *countFile = fopen("2_leader_function/leader_count.txt", "r");

    if (countFile == NULL)
    {
        // If file doesn't exist, assume leader count is 0
        printf(BYEL "No previous leader count found. Starting fresh.\n" RESET);
        leader_count = 0;
        return;
    }

    fscanf(countFile, "%d", &leader_count); // Read the last saved leader count
    fclose(countFile);                      // Close the file
}

// Function to save leader count to a file
void saveLeaderCount()
{
    FILE *countFile = fopen("2_leader_function/leader_count.txt", "w");

    if (countFile == NULL)
    {
        printf(BRED "Error opening file for saving leader count.\n" RESET);
        return;
    }

    if (flag)
    {
        fprintf(countFile, "%d", leader_count); // Save the updated leader count
    }

    fclose(countFile); // Close the file
}