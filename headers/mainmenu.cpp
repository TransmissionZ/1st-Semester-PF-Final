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
int showconcept(){
	int n;
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Concepts:");
	gotoxy(105, 24);
	printf("1 > Concept 1");
	gotoxy(105, 26);
	printf("2 > Concept 2");
	gotoxy(20, 58);
	i = getche();
	if (i== '`'|| i== '~' ){
		return 0;
	}
	if (i < '3' && i>='1')
		n = i - '0';
	else{
		gotoxy(90,58);
		printf("Wrong Input! Please Select again");
		showconcept();
	}
	return n;
}
int showlevels(){
	int n;
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Modes:");
	gotoxy(105, 24);
	printf("1 > Level 1");
	gotoxy(105, 26);
	printf("2 > Level 2");
	gotoxy(105, 28);
	printf("3 > Level 3");
	gotoxy(20, 58);
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
int showlevels(){
	int n;
	char i;
	ClearGame();
	gotoxy(105, 20);
	printf("Modes:");
	gotoxy(105, 24);
	printf("1 > Level 1");
	gotoxy(105, 26);
	printf("2 > Level 2");
	gotoxy(20, 58);
	i = getche();
	if (i== '`'|| i== '~' ){
		return 0;
	}
	if (i <= '2' && i>='1')
		n = i - '0';
	else{
		gotoxy(90,58);
		printf("Wrong Input! Please Select again");
		showlevels2();
	}
	return n;
}
int mainmenu(){
	int option, level, concept, score, l1, l2, l3, h1;
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
			concept = showconcept();
			switch (concept){
				case 1:
					level = showlevels();
					ClearGame();
					switch (level){
						case 1:
							l1 = Elvl1(&score);
							if (l1 != 2)
								break;
						case 2:
							l2 = Elvl2(&score);
							if (l2 != 3){
								break;	
							}
				
						case 3:
							l3 = Elvl3(&score);
							break;
					}
					break;
				case 2:
					level2 = showlevels2();
//					if (level2 == 1)
//						hlvl1();
//					if (level2 == 2)
//						hlvl2();
						
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
