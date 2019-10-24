#include "includes.h"
int color(int n){
	switch (n){
		case 1:
			system("color 0A");
			break;
		case 2:
			system("color 0B");
			break;
		case 3:
			system("color 0C");
			break;
		case 4:
			system("color 0D");
			break;
		case 5:
			system("color 0E");
			break;
		default:
			system("color 0F");
			break;
	}
}
int intro(char* title){
	int l=strlen(title);
	int w;

	while (w!=-1){
		int n = rand() % 5;
		for (int x=0,y=0; x<=25; x++,y++, y++){
			hidecursor();
			
			color(n);
			//system("color 0A");
			StrToStar(title,l,x,y);
			system("cls");
		}
		n = rand() % 5;
		for (int x=25,y=50; x<=50; x++,y--, y--){
			hidecursor();
			color(n);
			//system("color 0B");
			StrToStar(title,l,x,y);
			system("cls");
		}
		n = rand() % 5;
		for (int x=50,y=0; x<=75; x++,y++, y++){
			hidecursor();
			color(n);
			//system("color 0D");
			StrToStar(title,l,x,y);
			system("cls");
		}
		n = rand() % 5;
		for (int x=75,y=50; x<=120; x++,y--){
			hidecursor();
			color(n);
//			system("color 0E");
			StrToStar(title,l,x,y);
			system("cls");
		}
		n = rand() % 5;
		for (int x=120, y = 0; x>=0; x--){
			hidecursor();
			color(n);
//			system("color 0C");
			StrToStar(title,l,x,y);
			system("cls");
		}
	}
	getch();
}  

