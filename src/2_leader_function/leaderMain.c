#include "../global.h" 
#include "addLeader.c"
#include "viewleaders.c"
#include "viewProfile.c"

void leaderMain()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          LEADER AND THEIR BIOGRAPHY\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    int choice;

    while (1)
    {
        leaderMenu();
        printf(BYEL"Select an option: "RESET);
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addLeader();
            break;
        case 2:
            viewleaders();
            break;
        case 3:
            //viewprofile();
            break;
        case 4:
            return;
        default:
            printf("Invalid option. Please try again.\n");
        }
    }
}