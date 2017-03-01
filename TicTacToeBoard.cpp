#include "TicTacToeBoard.h"
/**
 * Class for representing a 3x3 Tic-Tac-Toe game board, using the Piece enum
 * to represent the spaces on the board.
**/

//Switches turn member variable to represent whether it's X's or O's turn
void TicTacToeBoard::toggleTurn()
{
	if(turn == X)
		turn = O;
	else
		turn = X;	
}

//Constructor sets an empty board and specifies it is X's turn first
TicTacToeBoard::TicTacToeBoard()
{
	for(int i = 0; i < 3; i++)
	{
		for(int x = 0; x < 3; x++)
		{
			 board[i][x] =   Blank;
		}
	}
}

//Resets each board location to the Blank Piece value
void TicTacToeBoard::clearBoard()
{

	for(int i = 0; i < BOARDSIZE; i++)
	{
		for(int x = 0; x < BOARDSIZE; x++)
		{
			 board[i][x] = Blank;
		}
	}
}

/**
 * Places the piece of the current turn on the board, returns what
 * piece is placed, and toggles which Piece's turn it is. placePiece does 
 * NOT allow to place a piece in a location where there is already a piece.
 * In that case, placePiece just returns what is already at that location. 
 * Out of bounds coordinates return the Piece Invalid value
**/ 
Piece TicTacToeBoard::placePiece(int row, int column)
{
	if(board[row][column] == X || board[row][colum] == O)
	{
		return board[row][column]; 
	}
	else
	{
		board[row][column] = turn; 
  		return Invalid;
	}
}

/**
 * Returns what piece is at the provided coordinates, or Blank if there
 * are no pieces there, or Invalid if the coordinates are out of bounds
**/
Piece TicTacToeBoard::getPiece(int row, int column)
{
	if(row < BOARDSIZE || coulmn < BOARDSIZE)
  		return Invalid;

	else if(row > 0  || coulmn > 0)
  		return Invalid;

	else
  		return board[row][coulmn];
}

/**
 * Returns which Piece has won, if there is a winner, Invalid if the game
 * is not over, or Blank if the board is filled and no one has won.
**/
Piece TicTacToeBoard::getWinner()
{
  return Invalid;
}
