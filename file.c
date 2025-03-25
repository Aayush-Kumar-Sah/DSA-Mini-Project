#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOARD_SIZE 10  // Using 1-9 for actual boards

char super[BOARD_SIZE][BOARD_SIZE] = {
    {'o'},  // Unused index 0
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 1
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 2
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 3
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 4
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 5
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 6
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 7
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  // Board 8
    {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'}   // Board 9
};

char flag[BOARD_SIZE] = {'0','1','2','3','4','5','6','7','8','9'};

void clearScreen() {
    system("cls");  // For Windows
    // system("clear");  // For Linux/Mac
}

void drawBoard()
{

    system("cls");
    printf("\n\n");
    printf("\t\t        WELCOME TO SUPER XO\n\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf("    \t\t      || \t\t   ||\n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[1][1], super[1][2], super[1][3], super[2][1], super[2][2], super[2][3], super[3][1], super[3][2], super[3][3]);
    printf("    _____|_____|_____ || _____|_____|_____ || _____|_____|_____ \n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[1][4], super[1][5], super[1][6], super[2][4], super[2][5], super[2][6], super[3][4], super[3][5], super[3][6]);
    printf("    _____|_____|_____ || _____|_____|_____ || _____|_____|_____ \n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[1][7], super[1][8], super[1][9], super[2][7], super[2][8], super[2][9], super[3][7], super[3][8], super[3][9]);
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("======================||===================||======================\n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[4][1], super[4][2], super[4][3], super[5][1], super[5][2], super[5][3], super[6][1], super[6][2], super[6][3]);
    printf("    _____|_____|_____ || _____|_____|_____ || _____|_____|_____ \n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[4][4], super[4][5], super[4][6], super[5][4], super[5][5], super[5][6], super[6][4], super[6][5], super[6][6]);
    printf("    _____|_____|_____ || _____|_____|_____ || _____|_____|_____ \n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[4][7], super[4][8], super[4][9], super[5][7], super[5][8], super[5][9], super[6][7], super[6][8], super[6][9]);
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("======================||===================||======================\n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[7][1], super[7][2], super[7][3], super[8][1], super[8][2], super[8][3], super[9][1], super[9][2], super[9][3]);
    printf("    _____|_____|_____ || _____|_____|_____ || _____|_____|_____ \n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[7][4], super[7][5], super[7][6], super[8][4], super[8][5], super[8][6], super[9][4], super[9][5], super[9][6]);
    printf("    _____|_____|_____ || _____|_____|_____ || _____|_____|_____ \n");
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("      %c  |  %c  |  %c   ||   %c  |  %c  |  %c   ||   %c  |  %c  |  %c   \n", super[7][7], super[7][8], super[7][9], super[8][7], super[8][8], super[8][9], super[9][7], super[9][8], super[9][9]);
    printf("         |     |      ||      |     |      ||      |     |      \n");
    printf("    \t\t      || \t\t   ||\n");
    printf("\n\n");
}


bool isValidMove(int bigBoard, int smallBoard) {
    return (bigBoard >= 1 && bigBoard <= 9) && 
           (smallBoard >= 1 && smallBoard <= 9) &&
           (super[bigBoard][smallBoard] == '0' + smallBoard);
}

int makeMove(int bigBoard, int smallBoard, char mark) {
    if (!isValidMove(bigBoard, smallBoard)) {
        printf("Invalid Move. Try Again\n");
        printf("Re-enter the small board choice (1-9): ");
        scanf("%d", &smallBoard);
        return makeMove(bigBoard, smallBoard, mark);
    }
    
    super[bigBoard][smallBoard] = mark;
    return smallBoard;
}

void checkAndUpdateBoardStatus(int boardNum, char mark) {
    // Check all possible winning combinations
    bool win = false;
    
    // Check rows
    for (int i = 1; i <= 7; i += 3) {
        if (super[boardNum][i] == super[boardNum][i+1] && 
            super[boardNum][i+1] == super[boardNum][i+2]) {
            win = true;
            break;
        }
    }
    
    // Check columns
    for (int i = 1; i <= 3; i++) {
        if (super[boardNum][i] == super[boardNum][i+3] && 
            super[boardNum][i+3] == super[boardNum][i+6]) {
            win = true;
            break;
        }
    }
    
    // Check diagonals
    if ((super[boardNum][1] == super[boardNum][5] && super[boardNum][5] == super[boardNum][9]) ||
        (super[boardNum][3] == super[boardNum][5] && super[boardNum][5] == super[boardNum][7])) {
        win = true;
    }
    
    if (win) {
        // Fill the entire board with the winner's mark
        for (int i = 1; i <= 9; i++) {
            super[boardNum][i] = mark;
        }
        flag[boardNum] = mark;
        return;
    }
    
    // Check for tie
    bool isTie = true;
    for (int i = 1; i <= 9; i++) {
        if (super[boardNum][i] == '0' + i) {
            isTie = false;
            break;
        }
    }
    
    if (isTie) {
        for (int i = 1; i <= 9; i++) {
            super[boardNum][i] = 'T';
        }
        flag[boardNum] = 'T';
    }
}

bool isBoardAvailable(int boardNum) {
    return flag[boardNum] == '0' + boardNum;
}

int checkGlobalWin() {
    // Check all possible winning combinations on the global board
    for (int i = 1; i <= 7; i += 3) {
        if (flag[i] == flag[i+1] && flag[i+1] == flag[i+2] && flag[i] != '0' + i) {
            return 1;  // Win
        }
    }
    
    for (int i = 1; i <= 3; i++) {
        if (flag[i] == flag[i+3] && flag[i+3] == flag[i+6] && flag[i] != '0' + i) {
            return 1;  // Win
        }
    }
    
    if ((flag[1] == flag[5] && flag[5] == flag[9] && flag[1] != '1') ||
        (flag[3] == flag[5] && flag[5] == flag[7] && flag[3] != '3')) {
        return 1;  // Win
    }
    
    // Check for global tie
    bool isTie = true;
    for (int i = 1; i <= 9; i++) {
        if (flag[i] == '0' + i) {
            isTie = false;
            break;
        }
    }
    
    return isTie ? 0 : -1;  // 0 for tie, -1 for continue
}

int main() {
    int player = 1, gameStatus = -1;
    int bigBoardChoice, smallBoardChoice, lastSmallBoard;
    char mark;
    
    drawBoard();
    
    // Initial move
    printf("Player %d, Enter your choice:\n", player);
    printf("Big Board Choice (1-9): ");
    scanf("%d", &bigBoardChoice);
    
    while (bigBoardChoice < 1 || bigBoardChoice > 9) {
        printf("Invalid choice. Please enter a number between 1 and 9: ");
        scanf("%d", &bigBoardChoice);
    }
    
    printf("Small Board choice (1-9): ");
    scanf("%d", &smallBoardChoice);
    
    mark = (player == 1) ? 'X' : 'O';
    lastSmallBoard = makeMove(bigBoardChoice, smallBoardChoice, mark);
    bigBoardChoice = lastSmallBoard;
    player = 2;
    
    do {
        drawBoard();
        
        // Check if the next board is available
        if (!isBoardAvailable(bigBoardChoice)) {
            printf("Board %d is already won/tied. You can choose any available board.\n", bigBoardChoice);
            printf("Available boards: ");
            for (int i = 1; i <= 9; i++) {
                if (isBoardAvailable(i)) printf("%d ", i);
            }
            printf("\n");
            
            printf("Player %d, choose a big board (1-9): ", player);
            scanf("%d", &bigBoardChoice);
            
            while (bigBoardChoice < 1 || bigBoardChoice > 9 || !isBoardAvailable(bigBoardChoice)) {
                printf("Invalid choice. Please select an available board (1-9): ");
                scanf("%d", &bigBoardChoice);
            }
        }
        
        printf("Player %d must play in board %d\n", player, bigBoardChoice);
        printf("Enter your small board choice (1-9): ");
        scanf("%d", &smallBoardChoice);
        
        mark = (player == 1) ? 'X' : 'O';
        lastSmallBoard = makeMove(bigBoardChoice, smallBoardChoice, mark);
        
        // Check if the current small board is won/tied
        checkAndUpdateBoardStatus(bigBoardChoice, mark);
        
        // Check global game status
        gameStatus = checkGlobalWin();
        
        // Determine next board to play
        bigBoardChoice = lastSmallBoard;
        
        // Switch player
        player = (player == 1) ? 2 : 1;
        
    } while (gameStatus == -1);
    
    drawBoard();
    
    if (gameStatus == 1) {
        printf("\nPlayer %d wins the game!\n", (player == 1) ? 2 : 1);
    } else {
        printf("\nThe game is a tie!\n");
    }
    
    return 0;
}