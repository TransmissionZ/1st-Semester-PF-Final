#include "headers/all.h"
int main(){
	full();
	srand (time(NULL));
	SetConsoleTitle(TEXT("Type-Fast Game"));
	char title[10] = "TypeFast";
	int a, b, c, Mm;
	int x = intro(title);
	if (x==1){
		system("color 0B");
		system("cls");
		border();
		Mm = mainmenu();
		if (Mm == 0){
			exit(0);
			return 0;
		}
		
	}
	return 1;
}
