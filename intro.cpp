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
        gotoxy(100,60);
        printf("Press S to Continue");
        for (int x=0,y=0; x<=25; x++, y++, y++){
            hidecursor();
            
            color(n);
            StrToStar(title,l,x,y);
            //system("cls");
 			Sleep(5);
            ClearScreen(x,y);
			gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				system("cls");
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=25,y=50; x<=50; x++,y--, y--){
            hidecursor();
            color(n);
            StrToStar(title,l,x,y);
            ClearScreen(x,y);
			//system("cls");
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				system("cls");
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=50,y=0; x<=75; x++,y++, y++){
            hidecursor();
            color(n);
            StrToStar(title,l,x,y);
            ClearScreen(x,y);
			//system("cls");
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				system("cls");
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=75,y=50; x<=120; x++,y--){
            hidecursor();
        	color(n);

            StrToStar(title,l,x,y);
            ClearScreen(x,y);
			//system("cls");
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				system("cls");
				return 1;
			}
		}
        }
        n = rand() % 5;
        for (int x=120, y = 0; x>=0; x--,x--){
            hidecursor();
        	color(n);
            StrToStar(title,l,x,y);
            ClearScreen(x,y);
			//system("cls");            
            gotoxy(100,60);
            printf("Press S to Continue");
            if (kbhit()){
	     	char ch = getch();
			if (ch=='s'){
				system("cls");
				return 1;
			}
		}
        }
	}	
}

