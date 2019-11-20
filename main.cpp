#include "headers/all.h"
int Mm;
int main(){
	full();
	SetConsoleTitle(TEXT("Type-Fast Game"));
	char title[10] = "TypeFast";
	int a, b, c;
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
