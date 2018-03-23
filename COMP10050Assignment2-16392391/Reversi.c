/*

	Author:				Aaron Kearns
	Student Number: 	16392391
	Description:
	
	Basis of the board game reversi, Assignment 2 of COMP10050 2018.


*/

#include <stdio.h>
#include <conio.h>

struct player {
    char name[20];
    char color[5]; 
    int disks; //Number of disks the player has
};

struct disk {
    int col; //0 - 7
    int row; // 0 - 7
    int color; //White = 1, black = 0
};

void main(){
    struct player p1, p2; //Declare our 2 players
    printf("Player 1 enter your name: ");
    scanf("%s", p1.name);
    printf("Enter your disk type (black or white): ");
    scanf("%s", p1.color);
    printf("Player 2 enter your name: ");
    scanf("%s", p2.name);
    printf("Enter your disk type (black or white): ");
    scanf("%s", p2.color);

    char board[8][8]; //Declare board array

    for (int i = 0; i < 8; i++){ //Initialize with 'x's
        for (int j = 0; j < 8; j++){
            board[i][j] = 'x';
        }
    }

    board[3][3] = '1'; //Center four squares with 1s and 0s
    board[4][4] = '1';
    board[3][4] = '0';
    board[4][3] = '0';

    int totalDisks;
    p1.disks = 2; //Initially both have 2 disks each (the center disks)
    p2.disks = 2; 
    totalDisks = 4; //4 disks on the board

    printf("\n\n"); //Print Top Column Identifier: 1 2 3 4 5 6 7 8
    printf("  ");
    for (int i = 1; i < 9; i++){
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 8; i++){ //Print the main board
        printf("%d|", i+1);      //The left row identifier, with a following '|' character
        for (int j = 0; j < 8; j++){
            printf("%c|", board[i][j]); //The piece on the board, x for empty, 0 for black and  for white
        }
        printf("\n");
    }
}