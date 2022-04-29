#include <stdio.h>
#include <stdlib.h>

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkWin();
void drawBoard();

int main()
{
    system("color a");
    int player = 1, i, choice;
    char mark; // X or O;
    /* i is progress and choice is the place in grid , i = 1 ; denotes win, -1 denotes game hasnot finished yet so that the loop goes on and i=0 denotes draw*/
    do
    {
        drawBoard();
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        printf("Player %d, Enter your Choice : ", player);
        scanf("%d", &choice);

        if (choice == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if (choice == 2 && square[2] == '2')
        {
            square[2] = mark;
        }
        else if (choice == 3 && square[3] == '3')
        {
            square[3] = mark;
        }
        else if (choice == 4 && square[4] == '4')
        {
            square[4] = mark;
        }
        else if (choice == 5 && square[5] == '5')
        {
            square[5] = mark;
        }
        else if (choice == 6 && square[6] == '6')
        {
            square[6] = mark;
        }
        else if (choice == 7 && square[7] == '7')
        {
            square[7] = mark;
        }
        else if (choice == 8 && square[8] == '8')
        {
            square[8] = mark;
        }
        else if (choice == 9 && square[9] == '9')
        {
            square[9] = mark;
        }
        else
        {
            printf("Invalid option!");
            player--;
        }

        i = checkWin();
        player++;

    } while (i == -1); // Till game is not finished
    drawBoard();
    if (i == 1)
    {
        printf("\n==> Player %d won <==\n\n", --player);
    }
    else
    {
        printf("\n==> Draw Match <==\n\n");
    }
    return 0;
}

int checkWin()
{
    // HORIZONTAL WINS
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    // VERTICAL WINS
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {

        return 1;
    }
    // DIAGONAL WINS
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    // For Draw
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        return 0;
    }
    // For unfinished
    else
    {
        return -1;
    }
}

void drawBoard()
{
    system("cls");
    printf("\n\n   Tic Tac Toe \n\n");
    printf("Player 1 (X) && Player 2 (O)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[7], square[8], square[9]);
    printf("     |     |     \n");
}