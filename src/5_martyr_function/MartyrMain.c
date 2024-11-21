#include "../global.h" 

#include "AddMartyr.c"
#include "ListMartyr.c"
#include "viewMartyrProfile.c"

void MartyrMain()
{
    printf(BCYN "-----------------------------------------------------------------------------------------\n");
    printf("                          THE MARTYERS\n");
    printf("-----------------------------------------------------------------------------------------\n" RESET);
    int choice;

    while (1)
    {
        MartyarMenu();
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            AddMartyr();
            break;
        case 2:
            ListMartyrs();
            break;
        case 3:
            //ViewMartyrprofile();
            break;
        case 4:
            return;
        default:
            printf("Invalid option. Please try again.\n");
        }
    }
}