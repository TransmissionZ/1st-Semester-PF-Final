#include "headers/all.h"
char words1[25][6];
int Mm;
int main(){
	full();
	SetConsoleTitle(TEXT("Type-Fast Game"));
	char title[10] = "TypeFast";
	int a, b, c;
	int x = intro(title);
	if (x==1){
		//boundary();
		Mm = mainmenu();
//		if (Mm == 1){
//			a = showlevels();
//			switch(a){
//				case 1:
//					EasyLvl1();
//				case 2:
//					EasyLvl2();
//				case 3:
//					EasyLvl3();
//				case 4:
//					HardLvl1();
//				case 5:
//					HardLvl2();
//			}
//		}
		
	}
}
