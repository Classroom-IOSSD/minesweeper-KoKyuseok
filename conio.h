#include <termios.h>
#include <stdio.h>

void initTerminals(int echo);

/* Restore old terminal i/o settings */
void resetTerminals(void);

/* Read 1 character - echo defines echo mode */
char getch_(int echo);

/* Read 1 character without echo */
char getch(void);

/* Read 1 character with echo */
char getche(void);

