#include <stdio.h>
#include <stdlib.h>

int main(){
char a1='1', a2='2', a3='3', b1='4', b2='5', b3='6', c1='7', c2='8', c3='9';
char currentInput='0';
char currentPlayer='X';
int *gameEnd=0;
int counter=0; // If 9 turns are played, and the last turn is not game-winning, then the game is a draw.
printBoard(a1, a2, a3, b1, b2, b3, c1, c2, c3);
while(gameEnd==0){
    counter++;
    printf("%c's turn \n", currentPlayer);
    scanf(" %c", &currentInput);
    if(currentInput=='1'){
        a1=currentPlayer;
    }
    if(currentInput=='2'){
        a2=currentPlayer;
    }
    if(currentInput=='3'){
        a3=currentPlayer;
    }
    if(currentInput=='4'){
        b1=currentPlayer;
    }
    if(currentInput=='5'){
        b2=currentPlayer;
    }
    if(currentInput=='6'){
        b3=currentPlayer;
    }
    if(currentInput=='7'){
        c1=currentPlayer;
    }
    if(currentInput=='8'){
        c2=currentPlayer;
    }
    if(currentInput=='9'){
        c3=currentPlayer;
    }

    printBoard(a1, a2, a3, b1, b2, b3, c1, c2, c3);
    check(a1, a2, a3, b1, b2, b3, c1, c2, c3, &gameEnd, counter);
    if(currentPlayer=='X'){
        currentPlayer='O';
    }else{
    currentPlayer='X';
    }
}
    return 0;
}
