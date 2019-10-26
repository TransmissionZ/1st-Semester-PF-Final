#include <stdlib.h>
#include <Windows.h>
int intro(char* title);
int mainmenu();
void full();
int main(){
	full();
	SetConsoleTitle(TEXT("Type-Fast Game"));
	char title[10] = "TypeFast";
	int x = intro(title);
	if (x==1){
		mainmenu();
	}
}
