#include <stdlib.h>
#include <Windows.h>
int intro(char* title);
int mainmenu();
void full();
char words1[25][6];
int main(){
	full();
	SetConsoleTitle(TEXT("Type-Fast Game"));
	char title[10] = "TypeFast";
	int x = intro(title);
	if (x==1){
		mainmenu();
	}
}
