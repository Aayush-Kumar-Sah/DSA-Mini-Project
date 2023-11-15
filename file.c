#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char super[10][10] = {{'o'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
                      {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'}};

char flag[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board()
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

int smallBoardMove(int smallBoardChoice, char mark, int bigBoardChoice)
{
    if (smallBoardChoice == 1 && super[bigBoardChoice][1] == '1')
    {
        super[bigBoardChoice][1] = mark;
        return 1;
    }
    else if (smallBoardChoice == 2 && super[bigBoardChoice][2] == '2')
    {
        super[bigBoardChoice][2] = mark;
        return 2;
    }
    else if (smallBoardChoice == 3 && super[bigBoardChoice][3] == '3')
    {
        super[bigBoardChoice][3] = mark;
        return 3;
    }
    else if (smallBoardChoice == 4 && super[bigBoardChoice][4] == '4')
    {
        super[bigBoardChoice][4] = mark;
        return 4;
    }
    else if (smallBoardChoice == 5 && super[bigBoardChoice][5] == '5')
    {
        super[bigBoardChoice][5] = mark;
        return 5;
    }
    else if (smallBoardChoice == 6 && super[bigBoardChoice][6] == '6')
    {
        super[bigBoardChoice][6] = mark;
        return 6;
    }
    else if (smallBoardChoice == 7 && super[bigBoardChoice][7] == '7')
    {
        super[bigBoardChoice][7] = mark;
        return 7;
    }
    else if (smallBoardChoice == 8 && super[bigBoardChoice][8] == '8')
    {
        super[bigBoardChoice][8] = mark;
        return 8;
    }
    else if (smallBoardChoice == 9 && super[bigBoardChoice][9] == '9')
    {
        super[bigBoardChoice][9] = mark;
        return 9;
    }
    else
    {
        printf("Invalid Move. Try Again");
        printf("\nRe-enter the smallboardChoice:");
        scanf("%d", &smallBoardChoice);
        smallBoardMove(smallBoardChoice, mark, bigBoardChoice);
    }
}

// INITIAL BIG BOARD MOVE FUNCTION:-
int ChoiceBigBoardMove(int bigBoardChoice, int smallBoardChoice, char mark)
{
    return smallBoardMove(smallBoardChoice, mark, bigBoardChoice);
}

int BigBoardMove(int smallBoardChoice, char mark, int bigBoardChoice)
{
    return smallBoardMove(smallBoardChoice, mark, bigBoardChoice);
}

void setFlagX(int num)
{
    for (int j = 1; j <= 9; j++)
    {
        if (super[num][j] != 'X')
        {
            return;
        }
    }
    flag[num] = 'X';
}

void setFlagO(int num)
{
    for (int j = 1; j <= 9; j++)
    {
        if (super[num][j] != 'O')
        {
            return;
        }
    }
    flag[num] = 'O';
}

void setFlagT(int num)
{
    for (int j = 1; j <= 9; j++)
    {
        if (super[num][j] != 'T')
        {
            return;
        }
    }
    flag[num] = 'T';
}

char checkwin(int num, char mark)
{
    if (super[num][1] == super[num][2] && super[num][2] == super[num][3])
    {
        return mark;
    }
    else if (super[num][4] == super[num][5] && super[num][5] == super[num][6])
    {
        return mark;
    }
    else if (super[num][7] == super[num][8] && super[num][8] == super[num][9])
    {
        return mark;
    }
    else if (super[num][1] == super[num][5] && super[num][5] == super[num][9])
    {
        return mark;
    }
    else if (super[num][3] == super[num][5] && super[num][5] == super[num][7])
    {
        return mark;
    }
    else if (super[num][1] == super[num][4] && super[num][4] == super[num][7])
    {
        return mark;
    }
    else if (super[num][2] == super[num][5] && super[num][5] == super[num][8])
    {
        return mark;
    }
    else if (super[num][3] == super[num][6] && super[num][6] == super[num][9])
    {
        return mark;
    }
    else if (super[num][1] != '1' && super[num][2] != '2' && super[num][3] != '3' && super[num][4] != '4' && super[num][5] != '5' && super[num][6] != '6' && super[num][7] != '7' && super[num][8] != '8' && super[num][9] != '9')
    {
        return '0';
    }
    else
    {
        return '-';
    }
}

void blockFill(int num, char item)
{
    for (int i = 1; i <= 9; i++)
    {
        super[num][i] = item;
    }
}

int bigWin()
{
    if (flag[1] == flag[2] && flag[2] == flag[3])
        return 1;

    else if (flag[4] == flag[5] && flag[5] == flag[6])
        return 1;

    else if (flag[7] == flag[8] && flag[8] == flag[9])
        return 1;

    else if (flag[1] == flag[4] && flag[4] == flag[7])
        return 1;

    else if (flag[2] == flag[5] && flag[5] == flag[8])
        return 1;

    else if (flag[3] == flag[6] && flag[6] == flag[9])
        return 1;

    else if (flag[1] == flag[5] && flag[5] == flag[9])
        return 1;

    else if (flag[3] == flag[5] && flag[5] == flag[7])
        return 1;

    else if (flag[1] != '1' && flag[2] != '2' && flag[3] != '3' && flag[4] != '4' && flag[5] != '5' && flag[6] != '6' && flag[7] != '7' && flag[8] != '8' && flag[9] != '9')

        return 0;
    else
        return -1;
}

int restrictBigBoardMove(int num){
    if(num==1 && flag[num]!='1')
        return 1;
    else if(num==2 && flag[num]!='2')
        return 1;
    else if(num==3 && flag[num]!='3')
        return 1;
    else if(num==4 && flag[num]!='4')
        return 1;
    else if(num==5 && flag[num]!='5')
        return 1;
    else if(num==6 && flag[num]!='6')
        return 1;
    else if(num==7 && flag[num]!='7')
        return 1;
    else if(num==8 && flag[num]!='8')
        return 1;
    else if(num==9 && flag[num]!='9')
        return 1;
    else
        return 0;
}

int validatebigboardMove(int bigBoardChoice){
    if(bigBoardChoice<1 || bigBoardChoice>9){
        return 1;
    }
    return 0;
}

int main()
{
    int player = 1, j = -1, bigBoardChoice, smallBoardChoice, temp;
    char mark;
    char i;

    board();

    player = (player % 2) ? 1 : 2;

    // TAKING THE PLAYER CHOICES:-
    printf("Player %d, Enter your choice:\n", player);
    printf("Big Board Choice:");
    scanf("%d", &bigBoardChoice);
    while(validatebigboardMove(bigBoardChoice)){
        printf("\nInvalid BigBoardMove:");
        printf("\nPlease re-enter bigboardMove:");
        scanf("%d",&bigBoardChoice);
    }
    printf("Small Board choice:");
    scanf("%d", &smallBoardChoice);

    mark = (player == 1) ? 'X' : 'O';

    // INITIAL BIG BOARD MOVE BY PLAYER:-
    bigBoardChoice = ChoiceBigBoardMove(bigBoardChoice, smallBoardChoice, mark);

    player++;

    do
    {
        if (j == 1)
        {
            blockFill(temp,mark);
            printf("\nPlayer %d is the Winner", player-1);
            break;
        }
        else if (j == 0)
        {
            blockFill(temp,mark);
            printf("Tie");
            break;
        }
        else
        {
            board();
            player = (player % 2) ? 1 : 2;
            while(restrictBigBoardMove(bigBoardChoice)){
                printf("\nAll the position in BigBoard %d is occupied",bigBoardChoice);
                printf("\nPlayer %d can play any BigBoard which is not occupied",player);
                printf("\nPlayer %d. Enter BigBoardChoice:");
                scanf("%d",&bigBoardChoice);
            }

            printf("\nPlayer %d must play in box %d\n", player, bigBoardChoice);
            temp = bigBoardChoice;
            printf("Enter your Small Board Choice:");
            scanf("%d", &smallBoardChoice);

            mark = (player == 1) ? 'X' : 'O';

            bigBoardChoice = BigBoardMove(smallBoardChoice, mark, bigBoardChoice);

            i = checkwin(temp, mark);

            if (i == 'X')
            {
                blockFill(temp, 'X');
                setFlagX(temp);
            }
            else if (i == 'O')
            {
                blockFill(temp, 'O');
                setFlagO(temp);
            }
            else if (i == '0')
            {

                blockFill(temp, 'T');
                setFlagT(temp);
            }

            j = bigWin();

            player++;
        }
    } while (1);
}
