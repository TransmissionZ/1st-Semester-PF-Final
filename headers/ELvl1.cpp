int Elvl1(int *s){
	char words[25][8];
	wordsfiling1(words);
	time_t start;
	int j = 0;
	char ch;
	int d, l,z, t;
	int i;
	char typed[10] = ".";
	start = clock();
	while (j != 24){
		z = 0;
		char typed[10] = ".";
		l = strlen(words[j]);
		for (i=0; i<50; i++){
			t = timer(start);
			if (t==1)
				break;
			gotoxy(11+i, 6+i);
			puts(words[j]);
			Sleep(200);
			ClearWord(11 + i, 6+i);
 			if (kbhit()){
 				gotoxy(20+z,58);
	     		ch = getche();
	     		if (ch == '`')
	     			return 0;
	     		if (words[j][z] == ch){
					typed[z] = ch;
					z++;
				}
				else{
					gotoxy(80,58);
					printf("WRONG LETTER! ENTER WHOLE WORD AGAIN!");
					z=0;
					ClearWord(20, 58);
				}
			}
			if (strcmp(typed,words[j]) == 0){
				ClearWord(80,58);
				ClearWord(100,58);
				ClearWord(120, 58);
				gotoxy(100,58);
				printf("Correct!");
				j++;
				(*s)++;
				Sleep(300);
				typed[0] = 0;
				ClearWord(11+i, 6+i);
				ClearWord(20,58);
				i = 53;
			}
			else if (i >= 49){
				gotoxy(90,30);
				printf("LEVEL 1 FAILED");
				gotoxy(100,31);
				printf("Retry? (1/0)");
				d = getch();
				d = d-'0';
				ClearGame();
				if (d==1){
					Elvl1(s);
				}
				else{
					mainmenu();
				}
			}
		}	
		if (t == 1)
			break;
	}
	if (j == 24){
		gotoxy(100,31);
		printf("Congrats!");
		gotoxy(100,32);
		printf("LEVEL 1 COMPLETED!");
		return 0;
	}
	else{
		gotoxy(100,30);
		printf("LEVEL 1 FAILED");
		gotoxy(100,31);
		printf("Retry? (1/0)");
		d = getch();
		d = d-'0';
		ClearGame();
		if (d==1){
			Elvl1(s);
		}
		else{
			mainmenu();
		}
	}
	
}
