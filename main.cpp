//Tic Tac Toe Game in C++

#include <iostream>
#include <stdlib.h>
using namespace std;


char turn = 'X';
bool draw = false;

int main()
{
    cout<<"\t\t\tT I C K -- T A C -- T O E -- G A M E\t\t\t";
    cout<<"\n\t\t\t\tFOR 2 PLAYERS\n\t\t\t";
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<"\n\nCongratulations!Player with 'O' has won the game";
    }
    else if(turn == 'O' && draw == false){
        cout<<"\n\nCongratulations!Player with 'X' has won the game";
    }
    else
    cout<<"\n\nGAME DRAW!!!\n\n";
} 