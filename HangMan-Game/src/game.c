#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "constants.h"

void drawHangman(int wrong) {
    if (wrong == 0) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("=========\n");
    } else if (wrong == 1) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("=========\n");
    } else if (wrong == 2) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf("  |   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("=========\n");
    } else if (wrong == 3) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("=========\n");
    } else if (wrong == 4) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf("      |\n");
        printf("      |\n");
        printf("=========\n");
    } else if (wrong == 5) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf(" /    |\n");
        printf("      |\n");
        printf("=========\n");
    } else if (wrong == 6) {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf(" / \\  |\n");
        printf("      |\n");
        printf("=========\n");
    }
}

int shouldGameEnd(int attempts, char* board) {
    if(attempts >= MAX_ATTEMPTS)
        return 1;

    int count=0, n = strlen(board);
    for(int i = 0; i < n; i++) {
        if(board[i] == '_') {
            count++;
        }
    }
    if(count <= 0)
        return 2;
    return 0;
}

const char* PickRandomWord(const char* words[], int wordNumber) {
    return words[rand() % wordNumber];
};

bool IsLetterInTheWord(const char* word, char letter) {
    int n = strlen(word);
    for(int i = 0; i < n; i++) {
        if(word[i] == letter) {
            return true;
        }
    }
    return false;
}

void revealLetter(char* board, const char* word, char letter) {
    int n = strlen(board);
    for(int i = 0; i < n; i++) {
        if(word[i] == letter) {
            board[i] = letter;
        }
    }
}
