/******************************************************************************
Spring 2021 Programming Foundations I
Author: Lora Streeter
Date: March 19, 2021
Purpose: The goal of this assignment is to learn how to manipulate two-dimensional arrays.
In addition, you will learn to update the contents of the designed array. You will add
onto the starter code and implement functions to complete this homework assignment.
We will be creating a simple Connect-Four game for this assignment.
*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const int SIZE_COL = 7; //number of columns on our game board
const int SIZE_ROW = 6; //number of rows on our game board
const char PLAYER1_AV = 'p'; //Player 1 avatar
const char PLAYER2_AV = 'm'; //Player 2 avatar

//----------------------------------------------------------------
// Name:        intro
// Parameters:  None
// Returns:     nothing
// Purpose:     Prints an introduction and the game directions
//----------------------------------------------------------------
void intro()
{
    cout << "---------Welcome to Connect-Four!------------\n";
    cout << "To win the game, you must place four of your pieces in a row on the board.\n";
    cout << "This is a 2-player game. Player1 has the avatar 'p' and Player2 has the avatar 'm'\n";
    cout << "You can win by connecting four pieces vertically, horizontally, or diagonally.\n";
    cout << "Good Luck!\n";
}

//----------------------------------------------------------------
// Name:        initBoard
// Parameters:  board(char, 2-dimensional array of row by column): the board to initialize
// Returns:     nothing
// Purpose:     Initialize the board with 'o' characters
//      THIS FUNCTION IS PROVIDED TO YOU AND SHOULD NOT NEED TO BE EDITED!
//----------------------------------------------------------------
void initBoard(char board[SIZE_ROW][SIZE_COL])
{
    // initialize the board to all 'o'
    for(int row=0;row<SIZE_ROW;row++)
    {
        for(int col=0;col<SIZE_COL;col++)
        {
            board[row][col] = 'o';
        }
    }
}

//----------------------------------------------------------------
// Name:        printBoard
// Parameters:  board(char, 2-dimensional array): the board to print, read-only
// Returns:     nothing
// Purpose:     Prints the current board to the screen
//      THIS FUNCTION IS PROVIDED TO YOU AND SHOULD NOT NEED TO BE EDITED!
//----------------------------------------------------------------
void printBoard(const char board[SIZE_ROW][SIZE_COL])
{
    cout << "           CONNECT FOUR\n      ";
    for(int i = 0; i < SIZE_COL; i++)
        cout << i << "  ";
    cout << endl;

    for(int row = 0; row < SIZE_ROW; row++)
    {
        cout << setw(3) << row << " | ";
        for(int col = 0; col < SIZE_COL; col++)
        {
           cout << board[row][col] << "  ";
        }
        cout << "|" << endl;
   }
}

//----------------------------------------------------------------
// Name:        firstMove
// Parameters:  None
// Returns:     char: either PLAYER1_AV or PLAYER2_AV
// Purpose:     Randomly selects which player will make the first move
//              Note - there are global variables that can help with your return statement(s)!
//----------------------------------------------------------------
char firstMove()
{
    int num = rand();
    if(num % 2 == 0)
        return PLAYER1_AV; //player 1 will go first for even numbers
    else
        return PLAYER2_AV; //player 2 will go first for odd numbers
}

//----------------------------------------------------------------
// Name:        isValidMove
// Parameters:  board(char, 2-dimensional array): the board to check, read-only
//              row: integer, pass by reference, the row that is the next available location for the chosen column
//              col: integer, pass by value, the column the user has chosen
// Returns:     boolean: true if the user gave a valid location, false for invalid input or a full column
// Purpose:     This function checks whether the user's chosen location is valid by
//              checking the given (row, column) location against the defined global
//              variables of the size of the board, and ensures that there is a spot available
//              in the user's chosen column
//----------------------------------------------------------------
bool isValidMove(const char board[SIZE_ROW][SIZE_COL], int & row, const int col)
{
    //check if user input is within the bounds of the board
    //We do not need to check the row in this place because we are just checking whether or
    //not the user input for column is valid


        //use a loop to determine the top open location (row) in the chosen column
        //so that the user's avatar piece can be placed
        //If there is not enough room in the column, this should not be a valid move



}


//----------------------------------------------------------------
// Name:        playerMove
// Parameters:  board(char, 2-dimensional array): the board
//              playerRow, integer, pass by reference, this will hold the row where the player's piece was played
//              playerCol, integer, pass by reference, this will hold the row that the player choses
//              avatar: character, pass by value, player's avatar (either 'p' or 'm')
// Returns:     Nothing
// Purpose:     This function prompts the player for the column where they want to drop their
//              next piece. Once the user's chosen move is valid, the player's avatar
//              is placed on the board
//----------------------------------------------------------------
void playerMove(char board[SIZE_ROW][SIZE_COL], int & playerRow, int & playerCol, const char avatar)
{
    //set the player's row to the bottom of the board to start out


    //print message declaring who's turn it is



    //Ask player for column and check to see if it was a valid move


        //reset the row in case we ran out of room in a previous column


    //once a valid choice has been made, update the board with the player's avatar

}

//----------------------------------------------------------------
// Name:        checkVertical
// Parameters:  board(char, 2-dimensional array): the board
//              currentRow: integer, pass by value,  the current row location
//              currentCol: integer, pass by value, the current column location
//              avatar: character, pass by value, player's avatar (either 'p' or 'm')
// Returns:     bool: true if a vertical match is found, false if no match is found
// Purpose:     This function looks for a vertical match of four of the player's avatar
//              by looking down the column.
//----------------------------------------------------------------
bool checkVertical(char board[SIZE_ROW][SIZE_COL], const int currentRow, const int currentCol, const char avatar)
{


}

//----------------------------------------------------------------
// Name:        checkHorizontal
// Parameters:  board(char, 2-dimensional array): the board
//              currentRow: integer, pass by value,  the current row location
//              currentCol: integer, pass by value, the current column location
//              avatar: character, pass by value, player's avatar (either 'p' or 'm')
// Returns:     bool: true if a horizontal match is found, false if no match is found
// Purpose:     This function looks for a horizontal match of four of the player's avatar
//              Keep in mind that the final piece to win could be in the middle of the set
//              four (x x o x o o o) where x is placed in column[2] to win
//----------------------------------------------------------------
bool checkHorizontal(char board[SIZE_ROW][SIZE_COL], const int currentRow, const int currentCol, const char avatar)
{


}

//----------------------------------------------------------------
// Name:        checkDiagonal
// Parameters:  board(char, 2-dimensional array): the board
//              currentRow: integer, pass by value,  the current row location
//              currentCol: integer, pass by value, the current column location
// Returns:     bool: true if four-in-a-row of the same avatar is found diagonally, false if not
// Purpose:     Checks for four-in-a-row of the same avatar symbol diagonally, both to
//              the left and to the right.  Again, the winning piece could be placed in the
//              middle of the set of four, so there are multiple possibilities that must be checked
//      THIS FUNCTION IS PROVIDED TO YOU AND SHOULD NOT NEED TO BE EDITED!
//----------------------------------------------------------------
bool checkDiagonal(char board[SIZE_ROW][SIZE_COL], const int currentRow, const int currentCol, const char avatar)
{
    bool matchFound = false;

    int numMatches1 = 0; //for diagonal (\)
    int numMatches2 = 0; //for diagonal (/)
    for(int i = -3; i <= 3; i++)
    {
        //outside the bounds for looking at diagonal (\)
        if(currentCol + i < 0 || currentCol + i > SIZE_COL-1 || currentRow + i < 0 || currentRow + i > SIZE_ROW-1)
        {
            numMatches1 = 0;
        }
        else
        {
            if(board[currentRow+i][currentCol+i] == avatar)
                numMatches1++;
            else
                numMatches1 = 0;
        }
        //outside the bounds for looking at diagonal (/)
        if(currentCol + i < 0 || currentCol + i > SIZE_COL-1 || currentRow - i < 0 || currentRow - i > SIZE_ROW-1)
        {
            numMatches2 = 0;
        }
        else
        {
            if(board[currentRow-i][currentCol+i] == avatar)
                numMatches2++;
            else
                numMatches2 = 0;
        }
        //if either diagonal has four avatar pieces in a row, a match has been found
        if(numMatches1 == 4 || numMatches2 == 4)
            matchFound = true;
    }
    return matchFound;
}

//----------------------------------------------------------------
// Name:        winGame
// Parameters:  board(char, 2-dimensional array): the board
//              currentRow: integer, pass by value,  the current row location
//              currentCol: integer, pass by value, the current column location
//              avatar: character, pass by value, player's avatar (either 'p' or 'm')
// Returns:     bool: true if there are four of the same avatar symbol in a row
// Purpose:     This functions checks all three possibilities for a win by calling the
//              appropriate functions - horizonally, vertically, and diagonally
//----------------------------------------------------------------
bool winGame(char board[SIZE_ROW][SIZE_COL], const int currentRow, const int currentCol, const char avatar)
{

    //Call functions to check for a winning combo


    //return true if player has four pieces in a row
}

//----------------------------------------------------------------
// Name:        keepPlaying
// Parameters:  None
// Returns:     bool: true if the user wants to continue, false if they want to quit
// Purpose:     This function asks the user if they would like to play again and returns
//              true or false based on their answer.
//----------------------------------------------------------------
bool keepPlaying()
{


    //ask player question, get user input


    //return appropriate true/false based off of user input


}

//----------------------------------------------------------------
// Name:        switchPlayer
// Parameters:  currAvatar, pass by reference, the user's current avatar
// Returns:     nothing
// Purpose:     Allows the program to switch which player has control of the board
//              If Player1 ('p') just went, then currAvatar should be switched to Player2 avatar
//              If Player2 ('m') just went, then currAvatar should be switched to Player1 avatar
//              Please note that there are some global variables that can help!
//----------------------------------------------------------------
void switchPlayer(char & currAvatar)
{


}

int main()
{
    char board[SIZE_ROW][SIZE_COL];
    char avatar = ' ';

    //when a winning move is found, set this to true.  If the user wants to play again,
    //this variable should be set back to false
    bool connectFour = false;

    //start at the bottom of the row and work upwards to find an empty location to play
    int playerRow = SIZE_ROW-1;
    //this will be user input
    int playerCol = 0;
    string winner = " ";

    //clear the console area and seed the random number generator appropriately
    system("clear");
    srand (time(NULL));

    //print out directions
    intro();

    //populate Board
    initBoard(board);

    //Print Board
    printBoard(board);

    //Choose who goes first by calling a function that will set the avatar to the appropriate character


    //loop the game to play
    while(!connectFour)
    {
        //call the function that handles the player's moves


        //print the board again


        //check to see if is a winning combo


            //if there is a win, change connectFour variable
            connectFour = true;

            //Assign winner's name to winner variable

            //...and print out a celebratory statement!


            //check if players want to continue playing

                //if yes, reset and print board, and reset the connectFour variable to false


        //Call function to switch player avatars

    }

    cout << "Good game!\n";

    return 0;
}
