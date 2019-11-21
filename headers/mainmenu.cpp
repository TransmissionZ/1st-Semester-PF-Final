struct player{
	char name[15];
	int score;
	int maxlevel;
};
int printMm(){
	char n;
	int i;
	gotoxy(105, 20);
	printf("MAIN MENU");
	gotoxy(105, 24);
	printf("1 > Start Game");
	gotoxy(105, 26);
	printf("2 > Scoreboard");
	gotoxy(105, 28);
	printf("3 > Help");
	gotoxy(105, 30);
	printf("4 > About-Us");	
	gotoxy(12, 58);
	n = getche();
	i = n - '0'; 
	return i;
}
int showlevels(){
	int n;
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Modes:");
	gotoxy(105, 24);
	printf("1 > Easy");
	gotoxy(105, 26);
	printf("2 > Medium");
	gotoxy(105, 28);
	printf("3 > Hard");
	gotoxy(12, 58);
	i = getche();
	if (i== '`'|| i== '~' ){
		return 0;
	}
	if (i <= '3' && i>='1')
		n = i - '0';
	else{
		gotoxy(90,58);
		printf("Wrong Input! Please Select again");
		showlevels();
	}
	return n;
}
int mainmenu(){
	int option, level, score;
	struct player p;
	option = printMm();
	ClearGame();
	switch (option){
		case 96:
			return 0;
		case 1:
			gotoxy(80, 20);
			printf("Enter your precious name to continue!");
			gotoxy(20,58);
			scanf("%s", p.name);
			ClearGame();
			ClearWord(20,58);
			level = showlevels();
			ClearGame();
			switch (level){
				case 1:
					Elvl1(&score);
					break;
			}
			
//		case 2:
//			//scoreboard();
//		case 3:
//			//help();
//		case 4:
			//aboutus();
	}
	p.score = score;
	gotoxy(100,30);
	printf("%d", p.score);
	return 0;
}
