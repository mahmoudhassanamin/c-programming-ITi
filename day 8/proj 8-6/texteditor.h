#ifndef text_
#define text_
void textattr(int ForgC);
void gotoxy(int x,int y);
void move(char event,int cols ,int rows);
void backspace(char **text,int cols ,int rows);
void edit (char *text,char event);
void print (char **text,int rows);
#endif // text_
