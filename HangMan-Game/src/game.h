#ifndef GAME_H
    #define GAME_H
    void drawHangman(int wrong);
    int shouldGameEnd(int attempts, char* board);
    const char* PickRandomWord(const char* words[], int wordNumber);
    bool IsLetterInTheWord(const char* word, char letter);
    void revealLetter(char* board, const char* word, char letter);
#endif