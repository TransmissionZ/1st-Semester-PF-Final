#include "headers/imp1.h"
#include "headers/StringtoStar.cpp"
#include "headers/imp1.cpp"
#include "headers/intro.cpp"
#include "headers/mainmenu.cpp"
char words1[25][6];
int Mm;
int main(){
	full();
	SetConsoleTitle(TEXT("Type-Fast Game"));
	char title[10] = "TypeFast";
	int x = intro(title);
	if (x==1){
		Mm = mainmenu();
		if (Mm == 1){
			//EasyLvl1(words1[25][6]);
		}
		
	}
}
