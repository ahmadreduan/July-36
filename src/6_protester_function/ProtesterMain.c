#include "../global.h" 

#include "Addprotester.c"
#include "ListProtest.c"
#include "ViewProtesterProfile.c"

void ProtesterMain()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          THE PROTESTER\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    int choice;

    while (1)
    {
        protesterMenu();
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            AddProteser();
            break;
        case 2:
            ListProtester();
            break;
        case 3:
            //ViewProtesterprofile();
            break;
        case 4:
            return;
        default:
            printf("Invalid option. Please try again.\n");
        }
    }
}