#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEADERS 100
#define MAX_MARTYRS 2000
#define MAX_NAME_LENGTH 100
#define MAX_CONTRIBUTE_LENGTH 500
#define MAX_ARTICLE_LENGTH 2000
#define BUFFER_SIZE 256

// Structure to store leader information
typedef struct
{
    char name[MAX_NAME_LENGTH];
    char role[MAX_NAME_LENGTH];
    char contribute[MAX_CONTRIBUTE_LENGTH];
} Leader;

Leader leaders[MAX_LEADERS];
int leader_count = 0;
int flag = 0;

char name[MAX_NAME_LENGTH];
char role[MAX_NAME_LENGTH];
char university[MAX_NAME_LENGTH];
char contribute[MAX_CONTRIBUTE_LENGTH];

int martyr_count = 0;

// Function declarations
void AllMenu();         // complete txt read file 1
void displayMenu();     // complete txt read file 2
void initialMovement(); // complete txt read file 3

void loadLeaderCount();
void saveLeaderCount();
void leaderMain();
void leaderMenu();  // complte
void addLeader();   // this a sub main function
void viewleaders(); // complete txt read file 8
void viewprofile(); //  incomplete

//===== MARTYRS ===

void MartyarMenu();
void MartyrMain();
void AddMartyr();
void ListMartyrs();
void ViewMartyrprofile();

void protesterMenu();
void participants();    // complete txt read file 4
void stepsOfMovement(); // complete txt read file 5
void inputProtester();
void writeHistoricalStory(); // error not run properly
void finalMovement();        // complete txt read file 6
void victoryJuly36();        // complete txt read file 7

// Regular text and style definitions as per your list
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
// Bold text definitions
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"
#define RESET "\x1B[0m" // Reset color
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"

#endif // GLOBAL_H