#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "constants.h"
#include "utils.h"
#include "game.h"

int main(void) {
    srand(time(NULL));
    const char* word = PickRandomWord(words, wordNumber); 
    int attempts = 0, n = strlen(word), result = 0;
    char board[n + 1], tempLetter;
    memset(board, '_', n);
    board[n] = '\0';
    while(1) {
        clearConsole();
        puts("HANGMAN GAME\n");
        printf("%s\n", board);
        drawHangman(attempts);
        printf("\nEnter the letter: ");
        if(!validateInput(&tempLetter)) {
            clearConsole();
            printf("You can only enter 1 character per attempt!");
            wait(1.5);
            continue;
        }
        if(!IsLetterInTheWord(word, tempLetter)) {
            attempts++;
        }
        else {
            revealLetter(board, word, tempLetter);        
        }
        result = shouldGameEnd(attempts, board);
        if(result != 0)
            break;
    }
    clearConsole();
    printf("Word was: %s\n", word);
    drawHangman(attempts);
    printf("\nTotal fails: %d", attempts);
    printf("\nYou've %s", (result == 1) ? "lost. Better luck next time" : "won. Congrats!");
    wait(5.0);
    return 0;
}
