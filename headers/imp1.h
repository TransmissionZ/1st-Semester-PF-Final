#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <time.h>

void gotoxy(short x, short y);
int StrToStar(char ptr[],int l, int e, int r);
void fontsize(int a, int b);
void hidecursor();
void full();
void wordsfiling1(char ptr[][8]);
void ClearScreen(int x,int y);
void border();
int showlevels();
int mainmenu();
void ClearTimer();
int timer(time_t start);
//int Elvl1();
