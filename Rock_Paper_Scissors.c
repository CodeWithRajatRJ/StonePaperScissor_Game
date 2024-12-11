#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void printBanner(int r, int c, char arr[r][c])
{
    // function to print a DD array
    printf("\n\n\n\n");
    for (int i; i < r; i++)
    { // outer loop is for rows
        for (int j = 0; j < c; j++)
        { // inner loop is for columns
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
}

// function to print rules of the Game.
void showRules()
{
    char rule[] = "One game will be of 3 rounds, in each round player and computer would choose one of(Rock🗿 , Paper📃 , Scissors✂️ )\nPlayer with the most wins, wins the Game🥳🥳\nBEST OF LUCK!!\n\n";
    printf("Rules of the game:\n");
    printf("%s", rule);
}

// Funtion for generating a Random Number.
int generateRandomNumber(int);
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char, char);
int greater(char char1, char char2)
{
    if(char1 == char2)
    {
        return -1;
    }
    else if(char1 == 'r' && char2 == 's')
    {
        return 1;
    }
    else if(char2 == 'r' && char1 == 's')
    {
        return 0;
    }
    else if(char1 == 'p' && char2 == 'r')
    {
        return 1;
    }
    else if(char2 == 'p' && char1 == 'r')
    {
        return 0;
    }
    else if(char1 == 's' && char2 == 'p')
    {
        return 1;
    }
    else if(char2 == 's' && char1 == 'p')
    {
        return 0;
    }

}

int main()
{

    char wel[3][44] = {

        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', ' ', 'W', 'E', 'L', 'C', 'O', 'M', 'E', ' ', 'T', 'O', ' ', 'T', 'H', 'E', ' ', 'R', 'O', 'C', 'K', ' ', 'P', 'A', 'P', 'E', 'R', ' ', 'S', 'C', 'I', 'S', 'S', 'O', 'R', 'S', ' ', 'G', 'A', 'M', 'E', ' ', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}};

    // printing Welcome banner
    printBanner(sizeof(wel) / sizeof(wel[0]), sizeof(wel[0]) / sizeof(wel[0][0]), wel);

    // Printing game info and rules
    showRules();
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};

    for (int i = 0; i < 3; i++)
    {

        // Takes Player's Input.

        printf("\nChoose 1 for Rock , 2 for Paper & 3 for Scissors.\n");
        printf("Player's Turn: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n ",playerChar);

        // Generates Computer's Input.
        printf("Computer's Turn: ");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer chose %c\n\n ",compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("*** Computer Won this round ***\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("-- It's a Tie --\n");
        }
        else
        {
            playerScore += 1;
            printf("^^^ You won this round ^^^\n");
        }
        printf("You : %d \nComputer : %d\n",playerScore,compScore);
    }
    

    if(playerScore > compScore)
    {
        printf("\nYou Win the Game!!\n\n");
    }
    else if(playerScore < compScore)
    {
        printf("\nComputer Win the Game!!\n\n");
    }
    else
    {
        printf("\nIt's a Draw !!\n");
    }
    return 0;
}
