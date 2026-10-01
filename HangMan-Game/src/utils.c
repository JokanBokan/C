#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void clearConsole(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

bool validateInput(char* c) {
    char next;
    scanf(" %c%c", c, &next);
    if(next != '\n') {
        while(getchar() != '\n');
        return false;
    }
    return true;
}

void wait(float seconds) {
    struct timespec ts;
    ts.tv_sec = (int)seconds;
    ts.tv_nsec = (seconds - (int)seconds) * 1e9;
    nanosleep(&ts, NULL);
}