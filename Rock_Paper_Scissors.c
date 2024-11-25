#include<stdio.h>
#include<string.h>

void printBanner(int r, int c, char arr[r][c])
{
    // function to print a DD array
    printf("\n\n\n\n");
    for(int i; i<r; i++){           // outer loop is for rows
        for(int j=0; j<c; j++){     // inner loop is for columns
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
     printf("\n\n\n\n");
}


void showRules(){
    char rule[]= "One game will be of 3 rounds, in each round player and computer would choose one of(Stone🗿 , Paper📃 , Scissors✂️ )\nPlayer with the most wins, wins the Game🥳🥳\nBEST OF LUCK!!\n\n";
    printf("Rules of the game:\n");
    printf("%s", rule);
}

int main()
{

    char wel[3][23] = {
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
        {'*',' ','W','E','L','C','O','M','E',' ', 'T','O',' ','T','H','E',' ','G','A','M','E',' ','*'},
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
    };

    //printing Welcome banner
    printBanner(sizeof(wel)/sizeof(wel[0]),sizeof(wel[0])/sizeof(wel[0][0]),wel);

    //Printing game info and rules
    showRules();

    return 0;
    }