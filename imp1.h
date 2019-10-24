void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
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
