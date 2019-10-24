#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void StrToStar(char *ptr,int l, int e, int r){

	int x = e;
	int y = r;
	for (int n; n<= l;n++){

		switch (ptr[n]){
			case 'a':
				for (int j = x+3; j<=x+12; j++){
					gotoxy(j,y);
					j++;
					printf("*");
				}
				gotoxy(x+1,y+1);
				printf("*");
				gotoxy(x+13,y+1);
				printf("*");
				for (int j=y+2; j<=y+9;j++){
					gotoxy(x+0,j);
					printf("*");
				}
				for (int j=x+2; j<=x+12;j++){
					gotoxy(j,y+6);
					j++;
					printf("*");
				}				
					
				for (int j=y+2; j<=y+9;j++){
					gotoxy(x+14,j);
					printf("*");
				}
				x = x + 17;
				break;
			case 't':
				for (int j=x;j<=x+17;j++){
					gotoxy(j,y);
					printf("#");
					j++;
				}
				for (int j = y+1; j<=y+9; j++){
					gotoxy(x+8,j);
					printf("#");
				}
				x = x + 19;
				y=y;
				break;
			case 'y':
				for (int i = x, j = y; j<=y+6; i++,j++){
					gotoxy(i,j);
					printf("#");
				}
				for (int i = x+7,j=y+5; j!=y-1; i++,j--){
					gotoxy(i,j);
					printf("#");
				}
				for (int j = y+6; j<=y+9;j++){
					gotoxy(x+6, j);
					printf("#");
				}
				x = x + 15;
				y = y;
				break;
			case 'p':
				for (int j = y+1; j<=y+9; j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i = x; i<=x+10; i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int j = y+1; j<=y+4;j++){
					gotoxy(x+12, j);
					printf("#");
				}
				for (int i = x+10; i>=x+1; i--){
					gotoxy(i,y+5);
					printf("#");
					i--;
				}
				x = x + 15;
				break;
			case 'e':
				for (int j=y;j<=y+9;j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y+5);
					printf("#");
					i++;
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y+9);
					printf("#");
					i++;
				}
				x = x + 15;
				break;
		}
	}
}
int intro(char* title){
	int l=strlen(title);
	int w;

	while (w!=-1){
		int n;
		for (int x=10,y=10; y<=25; x++,y++,x++){
			hidecursor();
			system("color 0A");
			StrToStar(title,l,x,y);
			system("cls");
		}
		for (int x=26,y=26; y<=50; x++,y++,x++){
			hidecursor();
			system("color 0B");
			StrToStar(title,l,x,y);
			system("cls");
		}
		for (int x=70,y=51; y!=25; x++,y--){
			hidecursor();
			system("color 0A");
			StrToStar(title,l,x,y);
			system("cls");

		}
		for (int x=95,y=25; y>=0; x++,y--){
			hidecursor();
			system("color 0D");
			StrToStar(title,l,x,y);
			system("cls");

		}
	}
	getch();
}
int main(){
	char title[10] = "type";
	intro(title);
}
