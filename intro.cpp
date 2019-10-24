#include "includes.h"
int intro(char* title)
{
	int l=strlen(title);
	int w;

	while (w!=-1){
		int n;
		for (int x,y; y<=50; x++,y++,x++){
			hidecursor();
			n++;
			switch (n){
				case 1:
					system("color 0C");
					StrToStar(title,l,x,y);
				case 2:
					system("color 0B");
					StrToStar(title,l,x,y);
					break;
				case 3:
					system("color 0C");
					StrToStar(title, l, x, y);
					break;
				case 4:
					system("color 0D");
					StrToStar(title, l, x, y);
					break;
				case 5:
					system("color 0E");
					StrToStar(title, l, x, y);
					break;
				case 6:
					system("color 0F");
					StrToStar(title, l, x, y);
					break;				
			}
			system("cls");
			if (n==6){
				n = 0;
			}
		}
	}
	getch();
}

  

