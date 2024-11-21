#include "global.h"
#include "AllMenu.c"
#include "Display_Read_Heading/displayHeading.c"

#include "1_initial_movement_read/initialMovement.c"    // read 1 done
#include "2_leader_function/leaderMain.c"               //funtion
#include "3_participate_read/participate.c"             //read 2
#include "4_step_of_movement_function/StepOfMovement.c" //funtion
 #include "5_martyr_function/MartyrMain.c"                               //funtion
// #include "6_protester_function"                            //function
#include "7_history_story_function/writeHistoricalStory.c" //function
#include "8_Final_movement_read/FinalMovemnet.c"           //read 3
#include "9_victory_day_read/victoryJuly.c"                //read 4

int main()
{

    int previous = 0, choice;
    displayHeading();

    while (1)
    {
        displayMenu(); // call from "AllMenu c file"
        if (previous)
        {
            printf(BCYN "\nPrevious option-%d." RESET, choice);
        }
        printf(BWHT "\nSelect an option: " RESET);
        scanf("%d", &choice);
        previous = 1;

        switch (choice)
        {
        case 1:
            initialMovement();
            break;
        case 2:
            leaderMain();
            break;
        case 3:
            participants(); // write histry read txt file
            break;
        case 4:
            stepsOfMovement();
            break;
        case 5:
            MartyrMain();
            break;
        case 6:
            //inputProtester();
            break;
        case 7:
            writeHistoricalStory();
            break;
        case 8:
            finalMovement();
            break;
        case 9:
            victoryJuly36();
            break;
        case 0:
            printf(BRED "Exiting program.\n" RESET);
            return 0;
        default:
            printf(BRED "Invalid option. Please try again.\n" RESET);
        }
    }
    return 0;
}
