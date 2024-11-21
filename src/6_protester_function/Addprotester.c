#include "../global.h"

// Function prototypes
void loadCount();
void saveCount();
void AddMartyr();

void AddProteser()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                                   ADD MARTYRS                                                \n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);

    FILE *file = fopen("5_martyr_function/addMartyr.txt", "a");
    if(file==NULL)
    {
        printf(BRED "Error opening file for writing.\n" RESET);
        return;

    }

    loadCount();

    if (martyr_count < MAX_MARTYRS)
    {
        printf("\nMartyr profile %d\n", martyr_count + 1);
        printf("-----------------------\n");
        fprintf(file, "Martyr profile %d\n-----------------------\n", martyr_count + 1);

        printf("\nEnter Martyr name: ");
        getchar();
        fgets(name, MAX_NAME_LENGTH, stdin);
        name[strcspn(name, "\n")] = '\0';
        fprintf(file, "Martyr name: %s\n", name);

        printf("Enter University: ");
        fgets(university, MAX_NAME_LENGTH, stdin);
        university[strcspn(university, "\n")] = '\0';
        fprintf(file, "University: %s\n", university);

        martyr_count++;
        printf(BWHT "\nMartyr added successfully.\n" RESET);

        flag = 1;
        saveCount();
    }
    else
    {
        printf(BRED "Maximum number of martyrs reached.\n" RESET);
    }

    fclose(file);
}

void loadCount()
{
    FILE *countFile = fopen("5_martyr_function/martyr_count.txt", "r");
    if (countFile == NULL)
    {
        printf(BWHT "No previous martyr count found. Starting fresh.\n" RESET);
        martyr_count = 0;
        return;
    }

    fscanf(countFile, "%d", &martyr_count);
    fclose(countFile);
}

void saveCount()
{
    FILE *countFile = fopen("5_martyr_function/martyr_count.txt", "w");
    if (countFile == NULL)
    {
        printf(BRED "Error opening file for saving martyr count.\n" RESET);
        return;
    }

    if (flag)
    {
        fprintf(countFile, "%d", martyr_count);
    }

    fclose(countFile);
}
