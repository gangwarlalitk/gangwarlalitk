#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include<mmsystem.h>

char sq[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkWin();
void drawBoard();

int main()
{
    system("color F0");
    int player = 1, i, choice;
    char mark;
    do
    {
        drawBoard();
        player = (player % 2) ? 1 : 2;
        printf("   Player %d, Enter the choice : ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : '0';

        if(choice == 1 && sq[1] == '1')
        {
            sq[1] = mark;
        }
        else if(choice == 2 && sq[2] == '2')
        {
            sq[2] = mark;
        }
        else if(choice == 3 && sq[3] == '3')
        {
            sq[3] = mark;
        }
        else if(choice == 4 && sq[4] == '4')
        {
            sq[4] = mark;
        }
        else if(choice == 5 && sq[5] == '5')
        {
            sq[5] = mark;
        }
        else if(choice == 6 && sq[6] == '6')
        {
            sq[6] = mark;
        }
        else if(choice == 7 && sq[7] == '7')
        {
            sq[7] = mark;
        }
        else if(choice == 8 && sq[8] == '8')
        {
            sq[8] = mark;
        }
        else if(choice == 9 && sq[9] == '9')
        {
            sq[9] = mark;
        }
        else
        {
            printf("   Invalid Option !");
            player--;
            getch();
        }

        i= checkWin();
        player++;

    }while(i == -1);

    drawBoard();
    if(i==1)
    {
        printf("   ==> Player %d WON <==", --player);
    }
    else
    {
        printf("   ==> Game DRAW <==");
    }
        getch();
        return 0;
}

int checkWin()
{
    if(sq[1] == sq[2] && sq[2] == sq[3])
		return 1;
	else if(sq[4] == sq[5] && sq[5] == sq[6])
		return 1;
	else if(sq[7] == sq[8] && sq[8] == sq[9])
		return 1;
	else if(sq[1] == sq[4] && sq[4] == sq[7])
		return 1;
	else if(sq[2] == sq[5] && sq[5] == sq[8])
		return 1;
	else if(sq[3] == sq[6] && sq[6] == sq[9])
		return 1;
	else if(sq[1] == sq[5] && sq[5] == sq[9])
		return 1;
	else if(sq[3] == sq[5] && sq[5] == sq[7])
		return 1;
	else if(sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] !='4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
		return 0;
	else
		return -1;

}

void drawBoard()
{
    system("cls");
    printf("\n\n\t Tic Tac Toe \n\n");
    printf("   Player 1 (X) - Player 2 (0) \n\n\n");
    printf("          |     |     \n");
    printf("      %c   |  %c  |  %c  \n", sq[1],sq[2],sq[3]);
    printf("     _____|_____|_____\n");
    printf("          |     |     \n");
    printf("      %c   |  %c  |  %c  \n", sq[4],sq[5],sq[6]);
    printf("     _____|_____|_____\n");
    printf("          |     |     \n");
    printf("      %c   |  %c  |  %c  \n", sq[7],sq[8],sq[9]);
    printf("          |     |     \n");
    printf("\n");
}



// Source Code made by Lalit Kumar Gangwar
