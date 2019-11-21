void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void fontsize(int a, int b){ 
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();  
	lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);  
	GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
	lpConsoleCurrentFontEx->dwFontSize.X = a;  
	lpConsoleCurrentFontEx->dwFontSize.Y = b;  
	SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void full(){
  
  	keybd_event(VK_MENU,0x38,0,0);

    keybd_event(VK_RETURN,0x1c,0,0);

    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);

    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);

}
void ClearScreen(int x,int y)
{
	for (int z = y; z<y+10; z++){
		gotoxy(x,z);
		for (int k=0; k<=120;k++){
			printf(" ");
		}
	}
}
void ClearGame(){
	for (int j = 6; j<57; j++){
		gotoxy(11,j);
		for (int i = 0; i<199; i++){
			printf(" ");
		}
	}
}
void ClearWord(int x, int y){
	gotoxy(x,y);
	for (int i = 0 ;i<20; i++){
		printf(" ");
	}
}
void ClearTimer(){
	gotoxy(195,4);
	for(int i = 0; i < 10; i++)
		printf(" ");
}
